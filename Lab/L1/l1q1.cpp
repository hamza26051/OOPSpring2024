#include <iostream>
int main(){
	int n;
	std:: cout<< "enter a number: \n"; // taking input
	std:: cin>> n;
int i;
	for (i=2; i<=9; i++){   // using a loop
			if (n==0 || n==1){
		std ::cout<<" it is not a prime number";
		break;
	}
		if (n%i==0){   //checking conditions
			std:: cout<< "it is not a prime number";
			 break;
		}
		else if( n %i !=0){
			std:: cout<< " it is not a prime number";
			break;
		}
	}
	return 0;
}
