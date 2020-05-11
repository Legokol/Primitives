#ifndef PRIMITIVES_OBJECT_H
#define PRIMITIVES_OBJECT_H

#include "Vector2D.h"
#include <cmath>
#include <SFML/graphics.hpp>

class Object {
protected:
    Vector2D loc;
public:
    Object(double x, double y);

    Object(const Vector2D &v);

    virtual void display(sf::RenderWindow &w) const = 0;

    virtual void fill(int r, int g, int b) = 0;

    virtual void rotate(double angle) = 0;

    void move(const Vector2D &v);

    void setLoc(const Vector2D &v);

    virtual void setLoc(double x, double y) = 0;

    void setX(double x);

    void setY(double y);

    double getX() const;

    double getY() const;
};


#endif //PRIMITIVES_OBJECT_H
