#include "Circle.h"

Circle::Circle(float x, float y, float r) : Object(x, y), shape(r) {
    shape.setPosition(x - r, y - r);
}

Circle::Circle(const Vector2D &v, float r) : Circle(v.getX(), v.getY(), r) {}

void Circle::display(sf::RenderWindow &w) const {
    w.draw(shape);
}

void Circle::fill(int r, int g, int b) {
    shape.setFillColor(sf::Color(r, g, b));
}

void Circle::setR(float r) {
    shape.setRadius(r);
}

float Circle::getR() const {
    return shape.getRadius();
}

void Circle::setLoc(float x, float y) {
    loc.setX(x);
    loc.setY(y);
    shape.setPosition(loc.getX() - shape.getRadius(), loc.getY() - shape.getRadius());
}

void Circle::rotate(float angle) { return; }
