// Refer to the declarations in the header
#include "Shape.h"

// This file is called the implementation file

Shape::Shape(double length){
    this->height = length;
    this->width = length;
    // Refer to class fields and methods with ::
    Shape::numOfShapes++;
}
Shape::Shape(double height, double width){
    this->height = height;
    this->width = width;
    Shape::numOfShapes++;
}

Shape::~Shape() = default;

// We can protect access to our fields using getters
// and setters. We could block certain values
// from being assigned, or we could provide
// custom output like adding inches or centimeter
// to the height, or width

// Because we create the class before naming an
// object we don't know its name. We can use this
// to refer to objects.

// The pointer operator is used to access an
// objects fields and methods
void Shape::SetHeight(double height){this->height = height;}
double Shape::GetHeight(){return height;}
void Shape::SetWidth(double width){this->width = width;}
double Shape::GetWidth(){return width;}

int Shape::GetNumOfShapes(){return numOfShapes;}

// A method marked as virtual can be used
// polymorphically.
// Polymorphism is a feature in which similar
// objects can be treated the same, but also
// utilize their differences automatically
// for any methods marked as virtual
double Shape::Area(){
    return height * width;
}

int Shape::numOfShapes = 0;


/*
 Because Shape has no purpose aside from grouping similar
 objects it should really be an Abstract class.

class Shape{
public:
    virtual double Area() = 0;
};

class Circle : public Shape{
protected:
    double width;
public:
    Circle(double w){
        width = w;
    }

    // Override Area()
    // You should use override to force the
    // compiler to check if the base class
    // virtual fucntion is the same as
    // the subclass
    double Area() override{
        return 3.14159 * pow((width / 2), 2);
    }
};

// This function receives Shapes but uses the
// correct Area() automatically
void ShowArea(Shape& shape){
    cout << "Area : " << shape.Area() << endl;
}

int main()
{
    Rectangle rectangle(10,5);
    Circle circle(10);
    ShowArea(rectangle);
    ShowArea(circle);

    Square square(10,10);
    ShowArea(square);

    return 0;
}
 *
 */





