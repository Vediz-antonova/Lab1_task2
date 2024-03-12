#ifndef LINE_H
#define LINE_H

#include "figure.h"

class Line : public Figure{
public:
    explicit Line(Figure *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
};

#endif // LINE_H
