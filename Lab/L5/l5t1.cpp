/*
    Name: hamza Sheikh
    Roll no: 23k-0060
*/

#include <iostream>
#include <string>

using namespace std;



class Square{
	private:
	float sidelength;
	float area;
	public:
	
	static float allareas;
		
		Square(){
		sidelength=5;
		}
		
		Square(float side){
			sidelength=side;
			
		}
		void setside(float length){
			sidelength=length;
		}
		
		float getside(){
			return sidelength;
		}
		
		float calculateArea(){
	
			area=sidelength*sidelength;
			allareas+= area;
			cout<<"area is\n"<<area<<"the sum of area is \n"<<allareas<< endl;
			
		}
};
float Square::allareas;

int main(){
	Square s1;

	s1.calculateArea();
	Square s2(4.5);
	s2.calculateArea();
	Square s3;
	s3.setside(6);
	s3.getside();
	s3.calculateArea();
	
	
	return 0;
	
	
	
}
