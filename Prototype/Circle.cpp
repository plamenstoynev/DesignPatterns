#include "Circle.hpp"

Circle::Circle(double x, double y, const std::string &color, double radius) : Shape(x, y, color), radius(radius) {}

Shape* Circle::clone() const {
    return new Circle(*this);
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}

double Circle::getRadius() const {
    return this->radius;
}

void Circle::print() const {
    std::cout << "Circle at (" << this->getX() << ", " << this->getY() << ") with color " << this->getColor() << " and radius " << this->radius << std::endl;
}