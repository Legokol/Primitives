#include "Triangle.h"

//xi, yi - координаты i-й вершины треугольника
Triangle::Triangle(float x1, float y1, float x2, float y2, float x3, float y3) : Object(x1, y1), a(x2 - x1, y2 - y1),
                                                                                 b(x3 - x1, y3 - y1) {
    shape[0].position = sf::Vector2f(loc.getX(), loc.getY());
    shape[1].position = sf::Vector2f(loc.getX() + a.getX(), loc.getY() + a.getY());
    shape[2].position = sf::Vector2f(loc.getX() + b.getX(), loc.getY() + b.getY());
}

void Triangle::display(sf::RenderWindow &w) const {
    w.draw(shape);
}

void Triangle::fill(int r, int g, int b) {
    shape[0].color = sf::Color(r, g, b);
    shape[1].color = sf::Color(r, g, b);
    shape[2].color = sf::Color(r, g, b);
}

void Triangle::setLoc(float x, float y) {
    loc.setX(x);
    loc.setY(y);
    shape[0].position = sf::Vector2f(loc.getX(), loc.getY());
    shape[1].position = sf::Vector2f(loc.getX() + a.getX(), loc.getY() + a.getY());
    shape[2].position = sf::Vector2f(loc.getX() + b.getX(), loc.getY() + b.getY());
}

//поворачивает треугольник на angle градусов по часовой стрелке
void Triangle::rotate(float angle) {
    a.rotate_L(angle);
    b.rotate_L(angle);
    setLoc(loc.getX(), loc.getY());
}

//задаёт длину "первой" стороны прямоугольника
void Triangle::setA(float _a) {
    float l = sqrt(a.getX() * a.getX() + a.getY() * a.getY());
    a = a * (_a / l);
    setLoc(loc.getX(), loc.getY());
}

//задаёт длину "второй" стороны прямоугольника
void Triangle::setB(float _b) {
    float l = sqrt(b.getX() * b.getX() + b.getY() * b.getY());
    b = b * (_b/ l);
    setLoc(loc.getX(), loc.getY());
}

//возвращает вектор, идущий от "первой" вершины треугольника до конца "первой" стороны
Vector2D Triangle::getA() const {
    return a;
}

//возвращает вектор, идущий от "первой" вершины треугольника до конца "второй" стороны
Vector2D Triangle::getB() const {
    return b;
}