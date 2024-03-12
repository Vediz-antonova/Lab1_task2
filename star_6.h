#ifndef STAR_6_H
#define STAR_6_H

#include "figure.h"

class Star_6 : public Figure{
public:
    explicit Star_6(Figure *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // STAR_6_H
