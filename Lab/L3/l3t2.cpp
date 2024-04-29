#include <iostream>
#include <string>

using namespace std;

class WaterBottle {
    string company;
    string color;
    float capacity_ml;
    float capacity_l;

public:
    void setCompany(string value1) {
        company = value1;
    }

    string getCompany() const {
        return company;
    }

    void setColor(string value2) {
        color = value2;
    }

    string getColor() const {
        return color;
    }

    void setCapacityMl(float value3) {
        capacity_ml = value3;
    }

    float getCapacityMl() const {
        return capacity_ml;
    }

    void setCapacityL(float value4) {
        capacity_l = value4;
    }

    float getCapacityL() const {
        return capacity_l;
    }

};

int main() {
    WaterBottle bottle;
    float consumed;

    cout << "Enter the water consumed in millilitres: ";
    cin >> consumed;
	if(consumed>=1000){
		consumed=consumed/1000;
	}
    bottle.setCompany("Nestle");
    bottle.setColor("Blue");
    bottle.setCapacityMl(200);
    bottle.setCapacityL(2);

    float total_capacity = bottle.getCapacityL() + bottle.getCapacityMl()/1000;

    if (consumed > total_capacity) {
        cout << "Error: Consumed amount exceeds total capacity." << endl;
        return 1;
    }

    cout << "Company: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Remaining Capacity: " << total_capacity - consumed << " liters" << endl;

    return 0;
}

