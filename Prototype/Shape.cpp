#include "Shape.hpp"

Shape::Shape(double x, double y, const std::string &color) : x(x), y(y), color(color){}

void Shape::setPos(double x, double y) {
    this->x = x;
    this->y = y;
}

void Shape::setColor(const std::string &color) {
    this->color = color;
}

double Shape::getX() const {
    return this->x;
}

double Shape::getY() const {
    return this->y;
}

std::string Shape::getColor() const {
    return this->color;
}