#include<iostream>
#include<string>

using namespace std;

class office {
private:
    string location;
    int seatingCapacity;
    string* furniture;

public:
    office(string loc = "", int capacity = 0, int furniturenum=3) :
        location(loc), seatingCapacity(capacity) {
        	furniture= new string[furniturenum]; 
		}
    ~office() {
        delete[] furniture;
    }
    
    void set_furniture(int index, const string& item/*address of an item of the array furniture is being given1*/) {
    	furniture[index]=item;
	}
    
    void displayInfo() {
        cout<<"Location: "<<location<<endl;
        cout<<"Seating Capacity: "<<seatingCapacity<<endl;
        cout<<"Furniture: ";
        for(int i=0;i<3;i++) {
            cout<<furniture[i]<<", ";
            
        }
        cout<<endl;
    }
};

int main() {
	
	office* Officeptr = new office ("gulshan",100,3);
	

	Officeptr->set_furniture(0,"table");
	Officeptr->set_furniture(1,"chair");
	Officeptr->set_furniture(2,"PC"); 
	

    cout<<"Office Info:"<<endl;
    Officeptr->displayInfo();
    cout<<endl;
    
    delete Officeptr;

    
    return 0;
}
