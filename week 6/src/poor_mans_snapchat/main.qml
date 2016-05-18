import QtQuick 2.6
import QtQuick.Controls 1.5

// Comment out
import QtMultimedia 5.6

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Poor Man's Snapchat")

    property int xpos
    property int ypos

    Rectangle
    {
        id: big_wrapper
        anchors.fill: parent

        Camera
        {
            id: ca_camera
            imageCapture
            {
                onImageCaptured:
                {
                    // Show the preview in an Image

                    //img_canvas.visible = true
                    //img_canvas.source = preview

                }
            }
        }

        Image
        {
            id: img_crayon
            source: "../../img/crayon.png"
            height: 50
            width: 50
            opacity: 1
            anchors.right: big_wrapper.right
            anchors.rightMargin: 20
            z: 4

            MouseArea
            {
                id: ma_mousearea_crayon
                anchors.fill: parent

                onPressed:
                {
                    img_crayon.opacity = 0.2
                }

                onReleased:
                {
                    img_crayon.opacity = 1
                }

                preventStealing: false
            }
        }

        Image
        {
            id: img_text
            source: "../../img/text.png"
            height: 50
            width: 50
            opacity: 1
            anchors.right: img_crayon.left
            anchors.rightMargin: 20
            z: 4

            MouseArea
            {
                id: ma_mousearea_text
                anchors.fill: parent

                onPressed:
                {
                    img_text.opacity = 0.2
                }

                onReleased:
                {
                    img_text.opacity = 1
                }

                preventStealing: false
            }
        }

        Image
        {
            id: img_pen
            source: "../../img/pen.png"
            height: 50
            width: 50
            opacity: 1
            anchors.right: img_text.left
            anchors.rightMargin: 20
            z: 4
            property bool bool_pen: false

            MouseArea
            {
                id: ma_mousearea_pen
                anchors.fill: parent

                onPressed:
                {
                    img_pen.opacity = 0.2
                }

                onReleased:
                {
                    img_pen.opacity = 1
                    img_pen.bool_pen = !img_pen.bool_pen
                }

                preventStealing: false
            }
        }

        Canvas
        {
            id: canvas_canvas
            anchors.fill: parent
            z: 3
            onImageLoaded:
            {
                var ctx = canvas_canvas.getContext('2d');
                timer_image.start()
            }

            onPaint:
            {
                var ctx = canvas_canvas.getContext("2d")
                ctx.fillStyle = "red"
                ctx.lineCap = "round"
                if(img_pen.bool_pen)
                {
                    ctx.fillRect(xpos-1, ypos-1, 5, 5)
                }
            }
            VideoOutput
            {
                id: video_snap
                source: ca_camera
                anchors.fill: parent
                z: -1
                //visible: false /// go away delete later
            }

            MouseArea{
                anchors.fill: parent
                onPressed:
                {
                    xpos = mouseX
                    ypos = mouseY
                    canvas_canvas.requestPaint()
                }
                onMouseXChanged:
                {
                    xpos = mouseX
                    ypos = mouseY
                    canvas_canvas.requestPaint()
                }
                onMouseYChanged:
                {
                    xpos = mouseX
                    ypos = mouseY
                    canvas_canvas.requestPaint()
                }


                preventStealing: true
            }
            Image{
                id:img_canvas
                visible: false
                z:parent.z +1
            }
        }


        Image
        {
            id: img_camera
            source: "../../img/camera.png"
            height: 50
            width: 50
            opacity: 1

            z:5
            Timer
            {
                id: timer_image
                interval: 300
                running: false
                onTriggered:
                {
                    img_canvas.visible = false
                    console.log("timer triggered")
                }
            }
            anchors.horizontalCenter: big_wrapper.horizontalCenter
            anchors.bottom: big_wrapper.bottom
            anchors.bottomMargin: 60

            MouseArea
            {
                id: ma_mousearea
                anchors.fill: parent

                onPressed:
                {
                    img_camera.opacity = 0.2
                }

                onReleased:
                {
                    img_camera.opacity = 1
                    se_shutter_camera.play()
                    ca_camera.imageCapture.capture()
                    img_canvas.visible = true
                }

                preventStealing: false
            }
        }


        Audio
        {
            id: se_shutter_camera
            source: "../../sound_effects/shutter_camera.mp3"
        }
    }

}
