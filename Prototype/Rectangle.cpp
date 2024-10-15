#include "Rectangle.hpp"

Rectangle::Rectangle(double x, double y, const std::string &color, double height, double width) : Shape(x, y, color), height(height), width(width) {}

Shape* Rectangle::clone() const {
    return new Rectangle(*this);
}

void Rectangle::setHeight(double height) {
    this->height = height;
}

void Rectangle::setWidth(double width) {
    this->width = width;
}

double Rectangle::getHeight() const {
    return this->height;
}

double Rectangle::getWidth() const {
    return this->width;
}

void Rectangle::print() const {
    std::cout << "Rectangle at (" << this->getX() << ", " << this->getY() << ") with color " << this->getColor() << " and height " << this->height << " and width " << this->width << std::endl;
}