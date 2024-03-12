#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle : public Figure{
public:
    explicit Circle(Figure *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
};

#endif // CIRCLE_H
