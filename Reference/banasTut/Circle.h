// Makes sure header files aren't included
// more than once
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape{
public:
    Circle();
    Circle(const Circle& orig);
    Circle(double width);
    virtual ~Circle();
    double Area();
private:

};

#endif /* CIRCLE_H */