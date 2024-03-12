#ifndef BRUSH_H
#define BRUSH_H

#include "figure.h"

class Brush : public Figure{
public:
    explicit Brush(Figure *parent = nullptr);

    void draw(QPainter *painter) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    QPainterPath path;
};

#endif // BRUSH_H
