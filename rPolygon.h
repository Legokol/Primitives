#ifndef PRIMITIVES_RPOLYGON_H
#define PRIMITIVES_RPOLYGON_H

#include "Circle.h"

class rPolygon : public Circle {
protected:
    Vector2D center;
public:
    rPolygon(double x, double y, double r, int n);

    rPolygon(const Vector2D &v, double r, int n);

    void rotate(double angle) override;

    void setLoc(double x, double y) override;
};


#endif //PRIMITIVES_RPOLYGON_H
