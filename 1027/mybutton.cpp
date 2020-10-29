#include "mybutton.h"
#include "time.h"
#include <QTime>
#include<QMouseEvent>
MyButton::MyButton(QWidget* parent):QPushButton(parent)
{

}
MyButton::~MyButton()
{

}
void MyButton::enterEvent(QEvent *e)
{
    int x = 0;
    int y = 0;
    QTime time = QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);
    x = qrand()%600;
    y = qrand()%400;
    while((x<=(this->x()+90)&&x>=(this->x()-90))&&(y<=(this->y()+30)&&y>=(this->y()-30))){
        x = qrand()%600;
        y = qrand()%400;
    }

    this->setGeometry(x,y,90,30);
}
