#include <iostream>
using namespace std;

class printClass;

class perimeter{
	private:
	float breadth;
	float length;
	public:
		perimeter(float b, float l){
			breadth=b;
			length=l;
			
		}
		friend class printClass;
    
		float calculate() const {
        return 2 * (length + breadth);
    }

};
class printClass {
public:
    static void printPerimeter(const perimeter& rect) {
        cout << "Perimeter of the rectangle: " << rect.calculate() << endl;
    }
};

int main() {
    float length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    perimeter rect(length, breadth);

    printClass::printPerimeter(rect);

    return 0;
}
