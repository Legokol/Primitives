#ifndef PRIMITIVES_CIRCLE_H
#define PRIMITIVES_CIRCLE_H

#include "Object.h"

class Circle : public Object {
protected:
    sf::CircleShape shape;
public:
    Circle(float x, float y, float r);

    Circle(const Vector2D &v, float r);

    void setR(float r);

    void display(sf::RenderWindow &w) override;

    void rotate(float angle) override;
};


#endif //PRIMITIVES_CIRCLE_H
