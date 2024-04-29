#include<iostream>
#include<string>

using namespace std;

class office {
private:
    string location;
    int seatingCapacity;
    string furniture[3];

public:
    office(string loc = "", int capacity = 0, string furn1 = "", string furn2 = "", string furn3 = "") :
        location(loc), seatingCapacity(capacity), furniture{furn1, furn2, furn3} {}

    void displayInfo() {
        cout<<"Location: "<<location<<endl;
        cout<<"Seating Capacity: "<<seatingCapacity<<endl;
        cout<<"Furniture: ";
        for(int i=0;i<3;i++) {
            cout<<furniture[i];
            if(i!=2)cout<<", ";
        }
        cout<<endl;
    }
};

int main() {
    office office1; 
    office office2("Building A"); 
	    office office3("Building B", 50); 
    office office4("Building C", 100, "table", "chair", "pc"); 

    cout<<"Office 1 Info:"<<endl;
    office1.displayInfo();
    cout<<endl;

    cout<<"Office 2 Info:"<<endl;
    office2.displayInfo();
    cout<<endl;

    cout<<"Office 3 Info: "<<endl;
    office3.displayInfo();
    cout<<endl;

    cout<<"Office 4 Info:"<<endl;
    office4.displayInfo();
    cout << endl;

    return 0;
}
