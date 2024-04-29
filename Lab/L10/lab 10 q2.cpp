#include <iostream>
using namespace std;

class Number {
	private:
	float value;

	public:
    Number(float val) {
	value=val;
	}


    Number operator--() {
        value *= 4;
        return *this;
    }

    Number operator--(int) {
        value /= 4;
        return *this;
    }

    float result()  {
        return value;
    }
};

int main() {
    Number num(10);

    --num;
	cout << " prefix decrement: " << num.result() << endl;

    num--;
	cout << " postfix decrement: " << num.result() << endl;

    return 0;
}

