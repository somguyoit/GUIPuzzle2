import QtQuick 2.5

Rectangle {
    id: l_side_bar
    property alias avatar: img_avatar
    property alias login_mouseArea: login_click
    property alias userName: username.text
    property alias passWord: password.text
    property alias timer_link: clock_time

    width: parent.width * .16
    height: parent.height
    color: "beige"
    states:
        [ State
        {
             name: "login"
             PropertyChanges
             {
                 target: username
                 text: "Username"
                 readOnly: false
             }
             PropertyChanges {
                 target: password_rect
                 visible: true
             }
             PropertyChanges
             {
                 target: password
                 text: "Password"
                 echoMode: Text.Normal
             }
             PropertyChanges
             {
                 target: credits_txt
                 visible: false
             }
             PropertyChanges {
                 target: login_button

             }
        },
        State
        {
            name: "logged"
            PropertyChanges {
                target: username
                readOnly: true
            }
            PropertyChanges
            {
                target: password_rect
                visible: false
            }
            PropertyChanges
            {
                target: credits_txt
                visible: true
            }
            PropertyChanges {
                target: login_button
            }
        }

    ]

    Image{
        x: parent.x + parent.width * .1
        y: parent.x + parent.height * .1
        width: parent.width * .8
        height: width
        id: img_avatar
        source: "qrc:/images/avatar.png"
    }
    Column
    {
        anchors.horizontalCenter:  img_avatar.horizontalCenter
        anchors.top: img_avatar.bottom
        y: img_avatar.y + img_avatar.height +10
        width: img_avatar.width *1.1
        height: parent * .7
        spacing: 5
        Rectangle
        {
            id: rect_user_name
            width: img_avatar.width * 1.1
            height: 30
            color: "white"
            border.color: "black"
            border.width: 2
            radius: 5

            TextInput{
                id: username
                //                x: parent.border.pixelAligned +1
                text: "Username"
                font.pointSize: 12
                anchors.centerIn: parent
                color: "black"
                font.family: "Hack"
                Keys.onEnterPressed:
                {

                    password.forceActiveFocus()
                }
                Keys.onReturnPressed:
                {
                    password.forceActiveFocus()
                }
                Keys.onTabPressed:
                {
                    password.forceActiveFocus()
                }

                onActiveFocusChanged:
                {
                    if(activeFocus && text == "Username")
                    {
                        text = ""
                    }
                    else if(text == "")
                    {
                        text = "Username"
                    }
                }

            }
        } // end username
        Rectangle
        {
            id: password_rect
            width: img_avatar.width * 1.1
            height: 30
            color: "white"
            border.color: "black"
            border.width: 2
            radius: 5

            TextInput{
                id: password
                //                    x: parent.border.pixelAligned +1
                text: "Password"
                font.pointSize: 12
                anchors.centerIn: parent
                color: "black"
                font.family: "Hack"
                Keys.onEnterPressed:
                {
                    login_button.forceActiveFocus()
                }
                Keys.onReturnPressed:
                {
                    login_button.forceActiveFocus()
                }
                Keys.onTabPressed:
                {
                    login_button.forceActiveFocus()
                }
                onActiveFocusChanged:
                {
                    if(activeFocus && text == "Password")
                    {
                        text = ""
                        echoMode = TextInput.Password
                    }
                    else if(text == "")
                    {
                        text = "Password"
                        echoMode = TextInput.Normal
                    }
                }

            }
        } //end password

        Rectangle
        {
            id: login_button
            color : "dark blue"
            border.color: "black"
            border.width: 2
            radius: 5
            width: img_avatar.width
            height: rect_user_name.height *1.6
            anchors.horizontalCenter: parent.horizontalCenter
            Text{
                anchors.centerIn: parent
                text: (l_side_bar.state == "login")? "Login" :"Logout"

            }
            onActiveFocusChanged:
            {
                if(activeFocus)
                {
                    border.width = 5
                    color = "blue"
                }
                else
                {
                    border.width = 2
                    color = "dark blue"
                }
            }
            Keys.onReturnPressed:
            {
                login_click.clicked(0)
            }
            Keys.onEnterPressed:
            {
                login_click.clicked(0)
            }
            Keys.onTabPressed:
            {
                username.forceActiveFocus()
            }
            MouseArea
            {
                id: login_click
                anchors.fill: parent
            }
        } //end login_button
    }// end column

    Text
    {
        id: credits_txt
        anchors.horizontalCenter: img_avatar.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: parent.height * .25
        visible: false
        text: "Credits"
        font.pointSize: 16
    }

    Rectangle
    {
        width: parent.width * 1/3
        height: 20
        anchors.horizontalCenter: credits_txt.horizontalCenter
        y: credits_txt.y + credits_txt.height * 2
        visible: credits_txt.visible
        Text{
            anchors.centerIn: parent
            text: "0"

        }
    }

    Rectangle
    {
        id: clock
        visible: credits_txt.visible
        width: parent.width *.5
        height: 20
        anchors.horizontalCenter: credits_txt.horizontalCenter
        y: credits_txt.y + credits_txt.height * 4
        Text{
            id: clock_time
            text: "0:00 AM"
            anchors.centerIn: parent
        }
    }
}

