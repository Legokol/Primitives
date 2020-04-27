#ifndef PRIMITIVES_RECTANGLE_H
#define PRIMITIVES_RECTANGLE_H

#include "Object.h"

class Rectangle : public Object {
protected:
    sf::VertexArray shape = sf::VertexArray(sf::Quads, 4);
    Vector2D a, b;
public:
    Rectangle(float x, float y, float a, float b);

    Rectangle(const Vector2D &v, float a, float b);

    void display(sf::RenderWindow &w) const override;

    void fill(int r, int g, int b) override;

    void setLoc(float x, float y) override;

    void rotate(float angle) override;

    void setA(float _a);

    void setB(float _b);
};


#endif //PRIMITIVES_RECTANGLE_H
