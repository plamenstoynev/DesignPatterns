#pragma once
#include <string>
#include <iostream>

class Shape {
private:
    double x = 0;
    double y = 0;
    std::string color;
public:
    Shape() = default;
    Shape(double x, double y, const std::string& color);

    void setPos(double x, double y);
    void setColor(const std::string& color);

    double getX() const;
    double getY() const;
    std::string getColor() const;

    virtual Shape* clone() const = 0;
    virtual void print() const = 0;

    virtual ~Shape() = default;
};