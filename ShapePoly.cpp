#include <iostream>

using namespace std;

class Shape 
{
protected: //private but inherited
    double area;
    double perimeter;

public:
    Shape() {}
    virtual double findPerimeter() {
        cout<<"this is th perimeter of a generic shape!";
        return 9000;
    }
    double findArea() {
        cout<< "this is the area of a generic shape!";
        return 50c;
    }
};

class Square : Shape 
{
private:
    double side;

public:
    Square(double sideLength) : Shape() { side = sideLength; }
    double findPerimeter(){
        return (side * 4);
    }
    double findArea(){
        return (side * side);
    }
};

class Circle : Shape
{
private:
    double radius;
public:
    Circle(double rad) : Shape() {
        radius = rad; 
    }
    double findPerimeter() {
        return (2*3.14159 * radius);
    }
    double findArea() {
        return (3.14159 * radius * radius);
    }
};


int main ()
{   //calls the constructor for each of the shape class
    Square mySquare(500);
    Circle myCircle(30);

    Shape * myShape = &mySquare;
    cout<< "MySquare Perimeter" << myShape->findPerimeter();
    Circle * myShape = &myCircle;
    cout<< "MyCricle Perimeter" << myShape->findPerimeter();

}