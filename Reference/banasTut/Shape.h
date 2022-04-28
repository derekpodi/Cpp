// The header file adds declarations for your
// code file

#ifndef SHAPE_H
#define SHAPE_H

// We will model a generic Shape in this class

// Protected fields & methods can only be accessed
// in this class, or in classes that inherit from
// the Shape class
// Private is used when you want to block access
// to all code aside from code in this class
// Public is used when you want to provide access
// to anything with access to an object
class Shape{
protected:
    double height;
    double width;

public:
    // Static variables share the same value for all
    // shape objects
    static int numOfShapes;

    // This is the constructor and it is called
    // every time a shape object is created
    // You can have multiple constructors with the same
    // name that differ only in the number of parameters
    // they accept
    // If only 1 parameter is passed will assume that
    // height and width are equal
    Shape(double length);
    Shape(double height, double width);
    Shape();

    // A deconstructor is called automatically when an object
    // is deleted or is no longer used
    // The default is fine, but you should create custom ones
    // when you must release memory, or resources
    virtual ~Shape();
    void SetHeight(double height);
    double GetHeight();
    void SetWidth(double width);
    double GetWidth();
    // Static methods can only access static fields
    static int GetNumOfShapes();
    virtual double Area();
};

#endif /* SHAPE_H */