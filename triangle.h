#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : public Figure {
public:
    explicit Triangle(Figure *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    // double Square();
    // double Perimeter();
    // std::pair<double, double> CenterOfMass();
};


#endif // TRIANGLE_H
