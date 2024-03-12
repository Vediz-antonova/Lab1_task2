#include "triangle.h"
#include <QPolygon>

Triangle::Triangle(Figure *parent) : Figure(parent){
    centerX = 0;
    centerY = 0;
    mouseX = 0;
    mouseY = 0;
}

void Triangle::draw(QPainter *painter){
    QPolygon polygon;
    polygon << QPoint(centerX, centerY - mouseY)
            << QPoint(centerX - mouseX / 2, centerY + mouseY / 2)
            << QPoint(centerX + mouseX / 2, centerY + mouseY / 2);
    painter->drawPolygon(polygon);
}

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    draw(painter);
}


// double Square() const override {
//     // Используем формулу Герона для расчета площади треугольника
//     double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//     double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
//     double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
//     double s = (a + b + c) / 2;

//     return sqrt(s * (s - a) * (s - b) * (s - c));
// }

// double Perimeter() const override {
//     // Суммируем длины всех сторон треугольника
//     double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//     double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
//     double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

//     return a + b + c;
// }

// std::pair<double, double> CenterOfMass() const override {
//     // Центр масс треугольника - это среднее арифметическое координат его вершин
//     double centerX = (x1 + x2 + x3) / 3;
//     double centerY = (y1 + y2 + y3) / 3;

//     return {centerX, centerY};
// }
