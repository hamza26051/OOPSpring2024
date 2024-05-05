#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    double speed;

public:
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual void calculateFuelEfficiency() = 0;

    string getMake() { return make; }
    string getModel() { return model; }
    double getSpeed() { return speed; }
};


class Car : public Vehicle {
private:
    double fuelCapacity;

public:
    Car(string make, string model, double speed, double fuelCapacity) {
        this->make = make;
        this->model = model;
        this->speed = speed;
        this->fuelCapacity = fuelCapacity;
    }

    void accelerate() override {
        speed += 10; 
    }

    void brake() override {
        speed -= 10; 
    }

    void calculateFuelEfficiency() override {
    }
};

class Truck : public Vehicle {
private:
    int cargoCapacity;

public:
    Truck(string make, string model, double speed, int cargoCapacity) {
        this->make = make;
        this->model = model;
        this->speed = speed;
        this->cargoCapacity = cargoCapacity;
    }

    void accelerate() override {
        speed += 5; 
    }

    void brake() override {
        speed -= 5; 
    }

    void calculateFuelEfficiency() override {

    }
};

int main() {
    Car car("Toyota", "Corolka w", 0, 110);
    Truck truck("Suzuki", "Mehran VXR", 2, 2300);

    car.accelerate();
    truck.accelerate();

    cout << "Car speed: " << car.getSpeed() << endl;
    cout << "Truck speed: " << truck.getSpeed() << endl;

    return 0;
}

