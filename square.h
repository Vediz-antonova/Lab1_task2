#ifndef SQUARE_H
#define SQUARE_H

#include "figure.h"

class Square : public Figure{
public:
    explicit Square(Figure *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // SQUARE_H
