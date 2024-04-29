/*
Name : Hamza Sheikh
id: 23k-0060
purpose: finding area and perimeter
*/

#include <iostream>
#include <cmath> 

using namespace std;

const float PI = 3.14;

class Shape {
public:
    static float area(float radius) {
        return PI * radius * radius;
    }

    static float perimeter(float radius) {
        return 2 * PI * radius;
    }
    static float area(float length, float width) {
        return length * width;
    }

    static float perimeter(float length, float width) {
        return 2 * (length + width);
    }
    static float area(float base, float perpendicular, float hypotenuse) {
        return 0.5 * base * perpendicular;
    }

    static float perimeter(float side1, float side2, float side3) {
        return side1 + side2 + side3;
    }
};

int main() {
		cout<<"Hamza Sheikh\n23k-0060\n\n"<<endl;
    float circle_radius = 3;
    cout << "Circle:" << endl;
    cout << "Area: " << Shape::area(circle_radius) << endl;
    cout << "Perimeter: " << Shape::perimeter(circle_radius) << endl;

    float rectangle_length = 5;
    float rectangle_width = 4;
    
    cout << "\nRectangle:" << endl;
    cout << "Area: " << Shape::area(rectangle_length, rectangle_width) << endl;
    cout << "Perimeter: " << Shape::perimeter(rectangle_length, rectangle_width) << endl;

    float triangle_base = 6;
    float triangle_perpendicular = 8;
    float triangle_hypotenuse = 10;
    cout << "\nTriangle:" << endl;
    cout << "Area: " << Shape::area(triangle_base, triangle_perpendicular, triangle_hypotenuse) << endl;
    cout << "Perimeter: " << Shape::perimeter(triangle_base, triangle_perpendicular, triangle_hypotenuse) << endl;

    return 0;
}

