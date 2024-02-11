/*  Programmer:Hamza Sheikh
	Date:8/02/24
	Description: finding gcd and lcm using recursive functions
	*/


#include <iostream>
using namespace std;





int calculateGCD(int a, int b){
	if (b==0){
		return a;
	}
	else{
		return calculateGCD(b, a%b);
	}
}
int calculateLCM(int a,int b) {
    static int mnum = 1;

    if (mnum%a == 0 && mnum%b== 0) {
        return mnum;
    } else {
        mnum++;
        return calculateLCM(a, b);
    }
}
int main(){
	int a,b;
	cout<<"enter the first number:\n";
	cin>>a;
	cout<<"enter the second number: \n";
	cin>>b;
	
	cout<<"GCD of the two numbers is\n"<< calculateGCD(a,b);
	cout<<"LCM of the two numbers is \n"<< calculateLCM(a,b);



return 0;	
	}
