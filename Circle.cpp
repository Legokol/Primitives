#include "Circle.h"

//x, y - положение круга, r - радиус
Circle::Circle(double x, double y, double _r) : Object(x, y), shape(_r) {
    r = _r;
    shape.setPosition(x - _r, y - _r);
}

//v - положение круга, r - радиус
Circle::Circle(const Vector2D &v, double _r) : Circle(v.getX(), v.getY(), _r) {}

void Circle::display(sf::RenderWindow &w) const {
    w.draw(shape);
}

void Circle::fill(int r, int g, int b) {
    shape.setFillColor(sf::Color(r, g, b));
}

//делает радиус круга равным r
void Circle::setR(double _r) {
    r = _r;
    shape.setRadius(_r);
}

//возвращает величину радиуса круга
double Circle::getR() const {
    return r;
}

void Circle::setLoc(double x, double y) {
    loc.setX(x);
    loc.setY(y);
    shape.setPosition(loc.getX() - shape.getRadius(), loc.getY() - shape.getRadius());
}

//ну круг же нельзя крутить, что за бред?
void Circle::rotate(double angle) { return; }
