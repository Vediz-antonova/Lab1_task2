#ifndef FIGURE_H
#define FIGURE_H

#pragma once
#include <QGraphicsItem>
#include <QWidget>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QKeyEvent>

class Figure : public QGraphicsItem {
private:
    bool setCenter = false;

public:
    int centerX = 0, centerY = 0;
    int mouseX, mouseY;

    explicit Figure(QGraphicsItem *parent = nullptr);

    virtual void draw(QPainter *painter) = 0;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
        draw(painter);
    }
    QRectF boundingRect() const {
        // Возвращает ограничивающий прямоугольник
        return QRectF(-100,-100,625,450);
    }
    void move(int dx, int dy);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
};
#endif // FIGURE_H
