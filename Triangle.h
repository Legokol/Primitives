#ifndef PRIMITIVES_TRIANGLE_H
#define PRIMITIVES_TRIANGLE_H

#include "Object.h"

class Triangle : public Object {
protected:
    sf::VertexArray shape = sf::VertexArray(sf::Triangles, 3);
    Vector2D a, b;
public:
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);

    void display(sf::RenderWindow &w) const override;

    void fill(int r, int g, int b) override;

    void setLoc(double x, double y) override;

    void rotate(double angle) override;

    void setA(double _a);

    void setB(double _b);

    Vector2D getA() const;

    Vector2D getB() const;
};


#endif //PRIMITIVES_TRIANGLE_H
