#include "loginmanager.h"

LoginManager::LoginManager(QObject *parent) : QObject(parent)
{
    addValidUsers();
}

void LoginManager::addValidUsers()
{
    mUserDB.insert("admin","IRuleOver4LL");
    mUserDB.insert("student", "student");
    mUserDB.insert("tester", "BetaFish");
}


void LoginManager::validateUser(QString username, QString password)
{
    QString usr_image;
    if( username == "admin")
    {
        usr_image = "qrc:/images/admin.png";
    }
    else if( username == "student")
    {
        usr_image = "qrc:/images/student.png";
    }
    else
    {
        usr_image = "qrc:/images/tester.png";
    }
    // if valid user, emit valid user and the image connected
    if(mUserDB.contains(username) && mUserDB.constFind(username).value() == password)
    {
        emit userLoginValid(username, usr_image);
    }
    else    // else emit invalid
    {
        emit userLoginInvalid(username);
    }
}
