#ifndef ICON_H
#define ICON_H
#include<QWidget>
#include<QPainter>
class Icon : public QWidget
{
Q_OBJECT
public:
Icon(QWidget* obj=nullptr);
virtual void paintEvent(QPaintEvent*);
~Icon (){}

};

#endif // ICON_H
