#ifndef MYBUTTON_H
#define MYBUTTON_H
#include<QPushButton>
#include <QObject>
#include<QMouseEvent>

class MyButton : public QPushButton
{
    Q_OBJECT;
public:
    MyButton(QWidget *parent = nullptr);
    ~MyButton();

public:
    void enterEvent(QEvent *e); //鼠标进入
private:
    MyButton *myButton = this;

};

#endif // MYBUTTON_H
