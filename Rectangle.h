#ifndef PRIMITIVES_RECTANGLE_H
#define PRIMITIVES_RECTANGLE_H

#include "Object.h"

class Rectangle : public Object {
protected:
    sf::VertexArray shape = sf::VertexArray(sf::Quads, 4);
    Vector2D a, b;
public:
    Rectangle(double x, double y, double _a, double _b);

    Rectangle(const Vector2D &v, double _a, double _b);

    void display(sf::RenderWindow &w) const override;

    void fill(int r, int g, int b) override;

    void setLoc(double x, double y) override;

    void rotate(double angle) override;

    void setA(double _a);

    void setB(double _b);

    Vector2D getA() const;

    Vector2D getB() const;
};


#endif //PRIMITIVES_RECTANGLE_H
