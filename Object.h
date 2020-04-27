#ifndef PRIMITIVES_OBJECT_H
#define PRIMITIVES_OBJECT_H

#include "vector2D.hpp"
#include <cmath>
#include <SFML/graphics.hpp>

class Object {
protected:
    Vector2D loc;
public:
    Object(float x, float y);

    Object(const Vector2D &v);

    virtual void display(sf::RenderWindow &w) const = 0;

    virtual void fill(int r, int g, int b) = 0;

    virtual void rotate(float angle) = 0;

    void move(const Vector2D &v);

    void setLoc(const Vector2D &v);

    virtual void setLoc(float x, float y) = 0;

    void setX(float x);

    void setY(float y);

    float getX() const;

    float getY() const;
};


#endif //PRIMITIVES_OBJECT_H
