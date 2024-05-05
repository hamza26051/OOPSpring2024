#include <iostream>

using namespace std;

class convert{
	protected:
		float val1;
		float val2;
	public:
		convert(float v1){
			val1=v1;
		}
		
		virtual void compute()=0;
};

class l_to_g:public convert{
	public:
		l_to_g(float v1):convert( v1){
		}
		void compute(){
			val2=val1/3.78541;
			cout<<"The quantity in Gallon is:"<<val2<<endl;
		}
};
class f_to_c:public convert{
	public:
			f_to_c(float v1):convert( v1){
		
		}
		void compute(){
			val2=(val1-32)*5/9;
			cout<<"The temperature in Fahrenheit is"<<val2<<endl;
		}
};
int main(){
l_to_g ltog(4);
convert *lg=&ltog;
lg->compute();

f_to_c ftoc(70);
convert *fc=&ftoc;
fc->compute();
	return 0;
}
