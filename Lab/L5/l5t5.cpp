/*
    Name: hamza Sheikh
    Roll no: 23k-0060
*/

#include <iostream>
#include <string>

using namespace std;

class engine{
	public:
		void start(){
		
		cout<<"engine starting...."<<endl;
}
};
class wheels{
	public:
		void turn(){
		
		
		cout<<"wheels turning...."<<endl;
}
};
class headlights{
	public:
	void on(){
	cout<<"headlights turning on....."<<endl;
}
};
class steering{
	public:
		void rotate(){
		
		cout<<"steering wheel turning....."<<endl;
}
};
class CarAggregation {
private:
    engine* carEngine;
    wheels* carWheels;
    headlights* carHeadlights;
    steering* carSteering;

public:
    CarAggregation(engine* engine, wheels* wheels, headlights* headlights, steering* steering)
        : carEngine(engine), carWheels(wheels), carHeadlights(headlights), carSteering(steering) {}

    void drive() {
        carEngine->start();
        carWheels->turn();
        carHeadlights->on();
        carSteering->rotate();
        cout << "Car is in motion!" << endl;
    }
};

class CarComposition {
private:
    engine carEngine;
    wheels carWheels;
    headlights carHeadlights;
    steering carSteering;

public:
    void drive() {
        carEngine.start();
        carWheels.turn();
        carHeadlights.on();
        carSteering.rotate();
        cout << "Car is in motion!" << endl;
    }
};
int main(){

engine* myEngine = new engine();
    wheels* myWheels = new wheels();
    headlights* myHeadlights = new headlights();
    steering* mySteering = new steering();

    CarAggregation myCar(myEngine, myWheels, myHeadlights, mySteering);
    myCar.drive();



CarComposition myCar1;
    myCar1.drive();

    return 0;
}
