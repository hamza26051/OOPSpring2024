/*  Programmer:Hamza Sheikh
	Date:8/02/24
	Description: building students management system
	*/


#include <iostream>

#include <string>
using namespace std;

struct _register{
string course_id;
string course_name;
};

struct student{
struct _register reg;
string std_id;
string first_name;
string last_name;
long long cell_no;
string email;
};

int main(){
struct student std[5];
for (int i=0; i<5; i++){
cout<<"Enter course ID for student" <<i+1<<"\n";
getline (cin, std[i].reg.course_id);
cout<<"Enter course name for student" <<i+1<<"\n";
getline (cin, std[i].reg.course_name);
cout<<"Enter student ID for student" <<i+1<<"\n";
getline (cin, std[i].std_id);
cout<<"Enter student first name for student" <<i+1<<"\n";
getline (cin, std[i].first_name);
cout<<"Enter student last name for student" <<i+1<<"\n";
getline (cin, std[i].last_name);
cout<<"Enter student email:";
getline (cin, std[i].email);
cout<<"Enter student cell number for student" <<i+1<<"\n";
cin>> std[i].cell_no;
cin.ignore();
}
for (int i=0; i<5; i++){
cout<<"Course ID for student" << i+1 << " is: " << std[i].reg.course_id << "\n";
cout<<"Course name for student" << i+1 << " is: " << std[i].reg.course_name << "\n";
cout<<"Student ID for student" << i+1 << " is: " << std[i].std_id << "\n";
cout<<"Student first name for student" << i+1 << " is: " << std[i].first_name<< "\n";
   cout<<"Student last name for student" << i+1 << " is: " << std[i].last_name<< "\n";
cout<<"Student cell number for student" << i+1 << " is: " << std[i].cell_no << "\n";
   cout<<"Student email for student" << i+1 << " is: " << std[i].email<< "\n";
}
return 0;
}

