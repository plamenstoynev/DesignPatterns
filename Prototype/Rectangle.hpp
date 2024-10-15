#pragma once
#include "Shape.hpp"

class Rectangle : public Shape {
private:
    double height = 0;
    double width = 0;
public:
    Rectangle() = default;
    Rectangle(double x, double y, const std::string& color, double height, double width);

    void setHeight(double height);
    void setWidth(double width);
    double getHeight() const;
    double getWidth() const;

    Shape* clone() const override;
    void print() const override;

    ~Rectangle() override = default;
};