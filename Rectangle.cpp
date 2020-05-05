#include "Rectangle.h"

Rectangle::Rectangle(float x, float y, float _a, float _b) : Object(x, y), a(_a, 0), b(0, _b) {
    shape[0].position = sf::Vector2f(loc.getX(), loc.getY());
    shape[1].position = sf::Vector2f(loc.getX() + a.getX(), loc.getY());
    shape[2].position = sf::Vector2f(loc.getX() + a.getX(), loc.getY() + b.getY());
    shape[3].position = sf::Vector2f(loc.getX(), loc.getY() + b.getY());
}

Rectangle::Rectangle(const Vector2D &v, float a, float b) : Rectangle(v.getX(), v.getY(), a, b) {}

void Rectangle::display(sf::RenderWindow &w) const {
    w.draw(shape);
}

void Rectangle::fill(int r, int g, int b) {
    shape[0].color = sf::Color(r, g, b);
    shape[1].color = sf::Color(r, g, b);
    shape[2].color = sf::Color(r, g, b);
    shape[3].color = sf::Color(r, g, b);
}

void Rectangle::setLoc(float x, float y) {
    loc.setX(x);
    loc.setY(y);
    shape[0].position = sf::Vector2f(loc.getX(), loc.getY());
    shape[1].position = sf::Vector2f(loc.getX() + a.getX(), loc.getY() + a.getY());
    shape[2].position = sf::Vector2f(loc.getX() + a.getX() + b.getX(), loc.getY() + a.getY() + b.getY());
    shape[3].position = sf::Vector2f(loc.getX() + b.getX(), loc.getY() + b.getY());
}

void Rectangle::rotate(float angle) {
    a.rotate_L(angle);
    b.rotate_L(angle);
    setLoc(loc.getX(), loc.getY());
}

void Rectangle::setA(float _a) {
    float l = sqrt(a.getX() * a.getX() + a.getY() * a.getY());
    a = a * (_a / l);
    setLoc(loc.getX(), loc.getY());
}

void Rectangle::setB(float _b) {
    float l = sqrt(b.getX() * b.getX() + b.getY() * b.getY());
    b = b * (_b/ l);
    setLoc(loc.getX(), loc.getY());
}

Vector2D Rectangle::getA() const {
    return a;
}

Vector2D Rectangle::getB() const {
    return b;
}