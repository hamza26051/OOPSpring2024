/*
Name: Hamza Sheikh
Date:20/3/24
Roll no: 23k-0060
*/
#include <iostream>
#include <string>

using namespace std;

class Appointment {
private:
    string clientName;
    float cost;

    static int totalAppointments;
    static float totalEarnings;
    
    public:
    	Appointment(string name, float price){
    		clientName=name;
    		cost=price;
    		totalAppointments++;
    		totalEarnings = totalEarnings+cost;
		}
		string getClientName() const 
		{ 
		return clientName;
		 }
    float getCost() const
	 {
	  return cost;
	  }

		
		float static average(){
			float avg=totalEarnings/ totalAppointments;
			return avg;
		}
		
};
int Appointment::totalAppointments = 0;
float Appointment::totalEarnings = 0.0;

int main(){
	Appointment appointment1("hamza", 50.0);
    Appointment appointment2("huzaifa", 40.0);
    Appointment appointment3("yesaullah", 60.0);

cout << "Average Cost per Appointment: " << Appointment::average() << endl;
	return 0;
}
