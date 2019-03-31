#include "icon.h"

Icon::Icon(QWidget* obj): QWidget(obj) {}

void Icon::paintEvent(QPaintEvent*)
{
QPainter p(this);
QImage img(":/resources/img/settings.png");
int scaleFactor = 18;
QImage tempImg = img.scaled(scaleFactor,scaleFactor, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
p.drawImage(QRectF(width()/2-scaleFactor/2,height()/2-scaleFactor/2,scaleFactor,scaleFactor),tempImg);
}
