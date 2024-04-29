#include <iostream>



int main(){
	int n;
	std:: cout<< "enter the number of digits \n";
	std:: cin>> n;
	int array[n];
	int i;
	int flag=0;
	for (i=0;i<n; i++){
		std:: cout<< "enter the value of digit number  \n" << i;
		std:: cin>> array[i];
	}
		for (i=0;i<n; i++){
		std:: cout<< " \n" << array[i];
		
	}
	int tar;
	std:: cout<< "enter the target value \n";
	std:: cin>> tar;
	int j;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j==i){
				continue;
			}
			if (array[i] + array[j]== tar){
				std::cout << "Target value obtained with the help of digits " << i << " and " << j << "\n";
				flag=1;
	exit(1);
			}
		}
	}
	if (flag==0){
	
	std::cout << "Target value not obtained ";
}

	return 0;
}

