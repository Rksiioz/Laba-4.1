#pragma once

class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h): width(w), height(h) {}
    virtual double area() const = 0;
    virtual ~Shape() {}
};
