#include <iostream>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"


int main() {
    //use prototype pattern
    Shape* circle = new Circle(1, 2, "red", 3);
    Shape* rectangle = new Rectangle(4, 5, "blue", 6, 7);

    Shape* circleClone = circle->clone();
    Shape* rectangleClone = rectangle->clone();

    circleClone->print();
    rectangleClone->print();

    std::cout << "Setting new values for clones" << std::endl;
    circleClone->setPos(8,7);
    circleClone->setColor("green");
    dynamic_cast<Circle*>(circleClone)->setRadius(9);

    rectangleClone->setPos(10, 11);
    rectangleClone->setColor("yellow");
    dynamic_cast<Rectangle*>(rectangleClone)->setHeight(12);

    circleClone->print();
    rectangleClone->print();
    return 0;
}