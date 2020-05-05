#ifndef PRIMITIVES_TRIANGLE_H
#define PRIMITIVES_TRIANGLE_H

#include "Object.h"

class Triangle : public Object {
protected:
    sf::VertexArray shape = sf::VertexArray(sf::Triangles, 3);
    Vector2D a, b;
public:
    Triangle(float x1, float y1, float x2, float y2, float x3, float y3);

    void display(sf::RenderWindow &w) const override;

    void fill(int r, int g, int b) override;

    void setLoc(float x, float y) override;

    void rotate(float angle) override;

    void setA(float _a);

    void setB(float _b);

    Vector2D getA() const;

    Vector2D getB() const;
};


#endif //PRIMITIVES_TRIANGLE_H
