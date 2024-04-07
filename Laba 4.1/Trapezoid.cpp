#include "Trapezoid.h"

double Trapezoid::area() const {
    return (side_a + side_b) * height / 2.0;
}
