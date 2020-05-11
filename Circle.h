#ifndef PRIMITIVES_CIRCLE_H
#define PRIMITIVES_CIRCLE_H

#include "Object.h"

class Circle : public Object {
protected:
    sf::CircleShape shape;
    double r;
public:
    Circle(double x, double y, double _r);

    Circle(const Vector2D &v, double _r);

    void display(sf::RenderWindow &w) const override;

    void fill(int r, int g, int b) override;

    void setLoc(double x, double y) override;

    void rotate(double angle) override;

    void setR(double _r);

    double getR() const;
};


#endif //PRIMITIVES_CIRCLE_H
