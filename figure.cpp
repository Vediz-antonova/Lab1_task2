#include "figure.h"
#include <QPainter>
#include <QPolygon>

Figure::Figure(QGraphicsItem *parent) : QGraphicsItem(parent) {
    setCenter = false;
}

void Figure::move(int dx, int dy) {
    int newX = centerX + dx, newY = centerY + dy;

    //update();
}

void Figure::mousePressEvent(QGraphicsSceneMouseEvent *event){
    if (!setCenter) {
        centerX = event->scenePos().x();
        centerY = event->scenePos().y();
        setCenter = true;
    }
}

void Figure::mouseMoveEvent(QGraphicsSceneMouseEvent *event){
    mouseX = event->scenePos().x() - centerX;
    mouseY = event->scenePos().y() - centerY;

    update();
}

void Figure::keyPressEvent(QKeyEvent *event) {
    int step = 10;
    int newX = centerX, newY = centerY;
    switch (event->key()){
    case Qt::Key_Left:
        newX -= step;
        break;
    case Qt::Key_Right:
        newX += step;
        break;
    case Qt::Key_Up:
        newY -= step;
        break;
    case Qt::Key_Down:
        newY += step;
        break;
    }

    // if(newX - r >= 0 && newX + r <= width() && newY - r >= 0 &&
    //     newY + r <= height()){
        centerX = newX;
        centerY = newY;
    // }

    update();
}
