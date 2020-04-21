#include "Object.h"

using namespace std;

Object::Object(float x, float y) : loc(x, y) {}

Object::Object(const Vector2D &v) : Object(v.getX(), v.getY()) {}

void setLoc(float x, float y) {}

void Object::move(const Vector2D &v) {
    loc = loc + v;
    setLoc(loc.getX(), loc.getY());
}

void Object::setLoc(const Vector2D &v) {
    loc = v;
    setLoc(loc.getX(), loc.getY());
}

void Object::setX(float x) {
    loc.setX(x);
    setLoc(loc.getX(), loc.getY());
}

void Object::setY(float y) {
    loc.setY(y);
    setLoc(loc.getX(), loc.getY());
}

float Object::getX() const {
    return loc.getX();
}

float Object::getY() const {
    return loc.getY();
}