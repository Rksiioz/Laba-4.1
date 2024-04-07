#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double w, double h): Shape(w, h) {}
    double area() const override;
};
