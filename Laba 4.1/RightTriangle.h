#include "Shape.h"

class RightTriangle : public Shape {
public:
    RightTriangle(double b, double h) : Shape(b, h) {}
    double area() const override;
};
