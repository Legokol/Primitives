#include "Object.h"

using namespace std;

Object::Object(double x, double y) : loc(x, y) {}

Object::Object(const Vector2D &v) : Object(v.getX(), v.getY()) {}

void setLoc(double x, double y) {}

void Object::move(const Vector2D &v) { //сдвигает объект на вектор v
    loc = loc + v;
    setLoc(loc.getX(), loc.getY());
}

void Object::setLoc(const Vector2D &v) { //делает положение объекта равным вектору v
    loc = v;
    setLoc(loc.getX(), loc.getY());
}

void Object::setX(double x) { //меняет горизонтальную состовляющую положения объекта
    loc.setX(x);
    setLoc(loc.getX(), loc.getY());
}

void Object::setY(double y) { //меняет вертикальную составляющую положения объекта
    loc.setY(y);
    setLoc(loc.getX(), loc.getY());
}

double Object::getX() const { //возвращает горизонтальную состовляющую положения объекта
    return loc.getX();
}

double Object::getY() const { //возвращает вертикальную составляющую положения объекта
    return loc.getY();
}