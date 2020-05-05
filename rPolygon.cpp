#include "rPolygon.h"

rPolygon::rPolygon(float x, float y, float r, int n) : Circle(x, y, r) {
    shape.setPointCount(n);
    center.setX(shape.getRadius());
    center.setY(shape.getRadius());
}

rPolygon::rPolygon(const Vector2D &v, float r, int n) : Circle(v, r) {
    shape.setPointCount(n);
}

void rPolygon::setLoc(float x, float y) {
    loc.setX(x);
    loc.setY(y);
    shape.setPosition(loc.getX() - center.getX(), loc.getY() - center.getY());
}

void rPolygon::rotate(float angle) {
    center.rotate_L(angle);
    shape.rotate(angle);
    setLoc(loc.getX(), loc.getY());
}