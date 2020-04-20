#ifndef PRIMITIVES_OBJECT_H
#define PRIMITIVES_OBJECT_H

#include "vector2D.hpp"

class Object {
private:
    Vector2D loc;
public:
    Object(float x, float y);

    Object(const Vector2D &v);

    virtual void display() = 0;

    void move(const Vector2D &v);

    void setLoc(const Vector2D &v);

    void setX(float x);

    void setY(float y);
};


#endif //PRIMITIVES_OBJECT_H
