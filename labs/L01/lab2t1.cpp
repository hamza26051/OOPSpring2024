/*  Programmer:Hamza Sheikh
	Date:9/02/24
	Description: swap the values using recursive function
	*/

#include <iostream>




using namespace std;

void swap(int &a, int &b) {
    int temp=a;
    a =b;
    b= temp;
}

int main() {
    int a = 5;
    int b = 10;

    cout<<"Before swapping:\na="<< a<<"b="<< b;
    swap(a,b);
    cout <<"After swapping \n:a=" <<a<< "b ="<< b;
 
    return 0;
}

