/*
    Name: hamza Sheikh
    Roll no: 23k-0060
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class validateString{
	private:
	string word;
	public:
		validateString(string str){
			word=str;
		}
		void check(){
			bool flag= true;
			for (char character: word){
				if (!isalpha(character)){
					flag=false;
					break;
				}
			}
			if (flag) {
            cout <<"the string contains only alphabets." << endl;
        } else {
            cout <<"all the characters in the string are not alphabet" << endl;
        }
    
		}
};
int main(){
	validateString word1("hamza");
	validateString word2("fast1234");


	 word1.check();
    word2.check();
	return 0;
}

