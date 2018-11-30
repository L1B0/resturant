#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    db = connect_mysql("root","666666","test","0.0.0.0");
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

QSqlDatabase Login::connect_mysql(const char *username, const char *passwd, const char *database, const char *mysqlip)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(mysqlip);
    db.setDatabaseName(database);//已建立的数据库名称
    db.setUserName(username);//用户名称
    db.setPassword(passwd);//密码
    bool ok = db.open();//如果成功ok位true，否则为false
    if(!ok)
    {
        cout<<"connect mysql failed...."<<db.lastError().text().toStdString();
        exit(-1);
    }
    else
        cout<<"connect mysql....ok!\n";
    return db;
}

bool Login::VerifyNumber(QString str)
{
    std::string temp = str.toStdString();
    for (int i = 0; i < str.length(); i++)
    {
        if (temp[i]<'0' || temp[i]>'9')
        {
            return false;
        }
    }

    return true;
}

bool Login::check_phone(QString s)
{
    if(strlen(s.toStdString().c_str()) != 11){
        QMessageBox box;
        box.setText("电话号码格式错误!!!");
        box.exec();
        ui->phoneNumber->clear();
        return false;
    }
    if( VerifyNumber(s) == false ){
        QMessageBox box;
        box.setText("电话号码格式错误!!!");
        box.exec();
        ui->phoneNumber->clear();
        return false;
    }
    return true;
}

bool Login::check_num(QString s)
{
    if( strlen(s.toStdString().c_str()) == 0 || VerifyNumber(s) == false || s.toInt() == 0 || s.toInt() > 10 ){
        QMessageBox box;
        box.setText("请输入用餐人数");
        box.exec();
        ui->peopleNum->clear();
        return false;
    }
    return true;
}

void Login::on_loginPush_clicked()
{
    bool a = check_phone(ui->phoneNumber->text());
    bool b = check_num(ui->peopleNum->text());
    if( a && b )
    {
        //QMessageBox::information(NULL, tr("Login"), tr("登录成功！"));
        this->close();
        MainWindow *m = new MainWindow(ui->phoneNumber->text(),ui->peopleNum->text().toInt());
        m->show();
    }
}

void Login::on_pushButton_2_clicked()
{
    this->close();
    QMessageBox::information(NULL, tr("Quit"), tr("欢迎下次光临:-)"));
}
