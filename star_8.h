#ifndef STAR_8_H
#define STAR_8_H

#include "figure.h"

class Star_8 : public Figure{
public:
    explicit Star_8(Figure *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // STAR_8_H
