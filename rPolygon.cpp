#include "rPolygon.h"

//x, y - положение многоугольника, r - радиус описанной окружности
rPolygon::rPolygon(double x, double y, double _r, int n) : Circle(x, y, r) {
    shape.setPointCount(n);
    center.setX(shape.getRadius());
    center.setY(shape.getRadius());
}

//v - положение многоугольника, r - радиус описанной окружности
rPolygon::rPolygon(const Vector2D &v, double _r, int n) : Circle(v, r) {
    shape.setPointCount(n);
}

void rPolygon::setLoc(double x, double y) {
    loc.setX(x);
    loc.setY(y);
    shape.setPosition(loc.getX() - center.getX(), loc.getY() - center.getY());
}

//поворачивает многоугольник на angle градусов по часовой стрелке
void rPolygon::rotate(double angle) {
    center.rotate(-angle);
    shape.rotate(angle);
    setLoc(loc.getX(), loc.getY());
}