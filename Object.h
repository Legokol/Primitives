#ifndef PRIMITIVES_OBJECT_H
#define PRIMITIVES_OBJECT_H

#include "vector2D.hpp"
#include <SFML/graphics.hpp>

class Object {
protected:
    Vector2D loc;
public:
    Object(float x, float y);

    Object(const Vector2D &v);

    virtual void display(sf::RenderWindow &w) = 0;

    virtual void rotate(float angle) = 0;

    void move(const Vector2D &v);

    void setLoc(const Vector2D &v);

    void setLoc(float x, float y);

    void setX(float x);

    void setY(float y);
};


#endif //PRIMITIVES_OBJECT_H
