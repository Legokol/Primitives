#include "Circle.h"

Circle::Circle(float x, float y, float r) : Object(x, y), shape(r) {
    shape.setPosition(loc.getX() - shape.getRadius(), loc.getY() - shape.getRadius());
}

Circle::Circle(const Vector2D &v, float r) : Circle(v.getX(), v.getY(), r) {}

void Circle::setR(float r) {
    shape.setRadius(r);
}

void Circle::display(sf::RenderWindow &w) {
    w.draw(shape);
}

void Circle::rotate(float angle) {}
