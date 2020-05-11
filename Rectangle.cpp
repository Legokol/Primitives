#include "Rectangle.h"

//x, y - положение прямоугольника, a, b -длины сторон
Rectangle::Rectangle(double x, double y, double _a, double _b) : Object(x, y), a(_a, 0), b(0, _b) {
    shape[0].position = sf::Vector2f(loc.getX(), loc.getY());
    shape[1].position = sf::Vector2f(loc.getX() + a.getX(), loc.getY());
    shape[2].position = sf::Vector2f(loc.getX() + a.getX(), loc.getY() + b.getY());
    shape[3].position = sf::Vector2f(loc.getX(), loc.getY() + b.getY());
}

//v - положение прямоугольника, a, b -длины сторон
Rectangle::Rectangle(const Vector2D &v, double _a, double _b) : Rectangle(v.getX(), v.getY(), _a, _b) {}

void Rectangle::display(sf::RenderWindow &w) const {
    w.draw(shape);
}

void Rectangle::fill(int r, int g, int b) {
    shape[0].color = sf::Color(r, g, b);
    shape[1].color = sf::Color(r, g, b);
    shape[2].color = sf::Color(r, g, b);
    shape[3].color = sf::Color(r, g, b);
}

void Rectangle::setLoc(double x, double y) {
    loc.setX(x);
    loc.setY(y);
    shape[0].position = sf::Vector2f(loc.getX(), loc.getY());
    shape[1].position = sf::Vector2f(loc.getX() + a.getX(), loc.getY() + a.getY());
    shape[2].position = sf::Vector2f(loc.getX() + a.getX() + b.getX(), loc.getY() + a.getY() + b.getY());
    shape[3].position = sf::Vector2f(loc.getX() + b.getX(), loc.getY() + b.getY());
}

//поворачивает прямоугольник на angle градусов по часовой стрелке
void Rectangle::rotate(double angle) {
    a.rotate(-angle);
    b.rotate(-angle);
    setLoc(loc.getX(), loc.getY());
}

//задаёт длину "первой" стороны прямоугольника
void Rectangle::setA(double _a) {
    double l = sqrt(a.getX() * a.getX() + a.getY() * a.getY());
    a = a * (_a / l);
    setLoc(loc.getX(), loc.getY());
}

//задаёт длину "второй" стороны прямоугольника
void Rectangle::setB(double _b) {
    double l = sqrt(b.getX() * b.getX() + b.getY() * b.getY());
    b = b * (_b/ l);
    setLoc(loc.getX(), loc.getY());
}

//возвращает вектор, идущий от "первого" угла прямоугольника до конца "первой" стороны
Vector2D Rectangle::getA() const {
    return a;
}

//возвращает вектор, идущий от "первого" угла прямоугольника до конца "второй" стороны
Vector2D Rectangle::getB() const {
    return b;
}