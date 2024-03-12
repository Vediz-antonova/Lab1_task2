#include "star_5.h"

Star_5::Star_5(Figure *parent) : Figure(parent){
    centerX = 0;
    centerY = 0;
    mouseX = 0;
    mouseY = 0;
}

void Star_5::draw(QPainter *painter){
    QPolygon polygon;
    int radios = qMax(mouseX, mouseY);
    for (int i = 0; i < 10; ++i) {
        double angle = 36 * i;  // Угол в градусах
        double radian = qDegreesToRadians(angle);  // Угол в радианах
        int currentRadios = (i % 2 == 0) ? radios : radios / 2;
        int dx = currentRadios * cos(radian);
        int dy = currentRadios * sin(radian);
        polygon << QPoint(centerX + dx, centerY + dy);
    }
    painter->drawPolygon(polygon);
}

void Star_5::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    draw(painter);
}
