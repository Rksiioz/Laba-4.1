#include "Shape.h"

class Trapezoid : public Shape {
private:
    double side_a;
    double side_b;

public:
    Trapezoid(double a, double b, double h): Shape(a, h), side_a(a), side_b(b) {}
    double area() const override;
};
