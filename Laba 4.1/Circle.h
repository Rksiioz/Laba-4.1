#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape(0, 0), radius(r) {}
    double area() const override;
};
