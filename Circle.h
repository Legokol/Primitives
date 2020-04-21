#ifndef PRIMITIVES_CIRCLE_H
#define PRIMITIVES_CIRCLE_H

#include "Object.h"

class Circle : public Object {
protected:
    sf::CircleShape shape;
public:
    Circle(float x, float y, float r);

    Circle(const Vector2D &v, float r);

    void display(sf::RenderWindow &w) const override;

    void strokeWeight(float d) override;

    void stroke(int r, int g, int b) override;

    void fill(int r, int g, int b) override;

    void setLoc(float x, float y) override;

    void rotate(float angle) override;

    void setR(float r);
};


#endif //PRIMITIVES_CIRCLE_H
