#pragma once
#include "Shape.hpp"

class Circle : public Shape {
private:
    double radius = 0;
public:
    Circle() = default;
    Circle(double x, double y, const std::string& color, double radius);

    Shape* clone() const override;

    void setRadius(double radius);
    double getRadius() const;
    void print() const override;

    ~Circle() override = default;
};