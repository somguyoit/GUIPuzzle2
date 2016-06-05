import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    id: papa_smurf
    visible: true
    minimumHeight: 720
    minimumWidth: 1280

    Connections
    {
        target: Login
        onUserLoginValid:
        {

            login_bar.state = "logged"
            login_bar.avatar.source = image
            background.visible = false
            banner.color = "green"
            banner_text.text = "Bruce Banner"
            Clock.init();

        }
        onUserLoginInvalid:
        {
            banner.color = "red"
            banner_text.text = "Login invalid! You shall not pass!"
        }
    }

    LeftSideBar{
        id:login_bar
        Connections
        {
            target: Clock
            id: timer_connection
            onMinute:
            {
//                login_bar.timer_link.text = time;
            }
        }

        login_mouseArea
        {
            onClicked:
            {
                if(login_bar.state == "logged")
                {
                    login_bar.state = "login"
                    login_bar.avatar.source = "qrc:/images/avatar.png"
                    background.visible = true
                    banner.color = "green"
                    banner_text.text = "Bruce Banner"
                }
                else
                {
                    Login.validateUser(userName, passWord)
                }
            }
        }

    }
    Rectangle
    {
        id: background
        anchors.left: login_bar.right
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.top: parent.top
        Image{
            anchors.fill: parent
            source: "qrc:/images/backdrop.png"
        }
    }

    Rectangle
    {
        id: banner
        height: parent.height * .1
        width: parent.width * 3/4
        x: parent.x + parent.width *1/8
        radius: height /4
        color: "Green"
        Text
        {
            id: banner_text
            anchors.centerIn: parent
            text: "Bruce Banner"
        }
    }
}
