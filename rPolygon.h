#ifndef PRIMITIVES_RPOLYGON_H
#define PRIMITIVES_RPOLYGON_H

#include "Circle.h"

class rPolygon : public Circle {
protected:
    Vector2D center;
public:
    rPolygon(float x, float y, float r, int n);

    rPolygon(const Vector2D &v, float r, int n);

    void rotate(float angle) override;

    void setLoc(float x, float y) override;
};


#endif //PRIMITIVES_RPOLYGON_H
