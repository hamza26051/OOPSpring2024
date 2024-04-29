#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class shape {
private:
    string choose;

public:
    shape(string cho) {
        choose = cho;
    }

    float area() const{
        float result = 0.0;
        if (choose == "Rectangle") {
            float width, length;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            result = length * width;
        } else if (choose == "Triangle") {
            float base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            result = 0.5 * base * height;
        } else if (choose == "Circle") {
            float radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            result = 3.14 * radius* radius;
        }
        return result;
    }

    shape operator +(const shape& other) const {
        float sum = area() + other.area();
        return shape("Sum");
    }
};

int main() {
    shape shape1("Rectangle");
    shape shape2("Triangle");
    float totalArea = shape1.area() + shape2.area();
    cout << "Total area: " << totalArea << endl;

    return 0;
}

