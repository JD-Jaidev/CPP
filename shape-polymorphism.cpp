#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    float area() {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    float area() {
        return length * breadth;
    }
};

class Triangle : public Shape {
private:
    float base, height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }
    float area() {
        return 0.5 * base * height;
    }
};

int main() {
    cout << "Enter radius : ";
    int rad = 0;
    cin >> rad;

    cout << "Enter length : ";
    int a = 0;
    cin >> a;

    cout << "Enter breadth : ";
    int b = 0;
    cin >> b;

    cout << "Enter base : ";
    int base = 0;
    cin >> base;

    cout << "Enter height : ";
    int height = 0;
    cin >> height;


    Circle c(rad);
    Rectangle r(a, b);
    Triangle t(base, height);
    
    Shape *ptr;
    
    ptr = &c;
    cout << "Area of Circle: " << ptr->area() << endl;
    
    ptr = &r;
    cout << "Area of Rectangle: " << ptr->area() << endl;
    
    ptr = &t;
    cout << "Area of Triangle: " << ptr->area() << endl;
    
    return 0;
}