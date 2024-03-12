#ifndef STAR_5_H
#define STAR_5_H

#include "figure.h"

class Star_5 : public Figure{
public:
    explicit Star_5(Figure *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // STAR_5_H
