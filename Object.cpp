#include "Object.h"

using namespace std;

Object::Object(float x, float y) : loc(x, y) {}

Object::Object(const Vector2D &v) : Object(v.getX(), v.getY()) {}

void Object::move(const Vector2D &v) {
    loc = loc + v;
}

void Object::setLoc(const Vector2D &v) {
    loc = v;
}

void Object::setLoc(float x, float y) {
    loc.setX(x);
    loc.setY(y);
}

void Object::setX(float x) {
    loc.setX(x);
}

void Object::setY(float y) {
    loc.setY(y);
}