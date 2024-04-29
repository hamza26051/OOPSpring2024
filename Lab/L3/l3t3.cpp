

#include <iostream>
#include <string>
#include <cstdlib> 
#include <unistd.h>
using namespace std;

class Calendar {
private:
	string months[12];
    string tasks[12][31];
    int currentYear;

public:
	Calendar(int year) : currentYear(year) {}
    
    
	void addTask(int month, int day, const string& task) {
    	if(month==2) {
    		if(day>=1 && day<=28) {
    			tasks[month - 1][day - 1] = task;
                cout << "Task added successfully on " << day << "/" << month << "/" << currentYear << endl;
			} else{
				cout<<"invalid date!"<<endl;
			}
		} else if (month >= 1 && month <= 12 && day >= 1 && day <= 31) {
            tasks[month - 1][day - 1] = task;
            cout << "Task added successfully on " << day << "/" << month << "/" << currentYear << endl;
        } else {
            cout << "Invalid date!" << endl;
        }
        
    }
    
    void removeTask(int month, int day) {
        if(month==2) {
    		if(day>=1 && day<=28) {
    			tasks[month - 1][day - 1] = "";
                cout << "Task removed successfully from " << day << "/" << month << "/" << currentYear << endl;
			} else{
				cout<<"invalid date!"<<endl;
			}
		} else if (month >= 1 && month <= 12 && day >= 1 && day <= 31) {
            tasks[month - 1][day - 1] = "";
            cout << "Task removed successfully from " << day << "/" << month << "/" << currentYear << endl;
        } else {
            cout << "Invalid date!" << endl;
        }
    }
    
    void displayTasks() {
        cout << "Tasks for the year " << currentYear << ":" << endl;
        for (int i = 0; i < 12; ++i) {
            cout << "Month " << i + 1 << ":" << endl;
            for (int j = 0; j < 31; ++j) {
                if (!tasks[i][j].empty()) {
                    cout << j + 1 << "/" << i + 1 << ": " << tasks[i][j] << endl;
                }
            }
        }
    }
    
};

int main() {
	int year,choice;
	
    cout<<"welcome to calendar management system\n"<<endl;
    cout<<"enter the year for which you want to create a calender:"<<endl;
    cin>>year;
    cin.ignore(); 
    Calendar myCalendar(year);
    cout<<"\ncalender successfully created"<<endl;
    while(true) {
	    
	    cout << " 1)add a task in the calender" << endl;
        cout << "2)remove a task from the calender" << endl;
        cout << "3)display all the tasks in the calender" << endl;
        cout << "4)exit" << endl;
        cout << "enter your choice:" << endl;
        cin >> choice;
    
        int rday,rmonth;
        string details;
        int day,month;
    
	    switch(choice) {
    	    case 1:
    		    cin.ignore();
    		    cout<<"enter the detail of the task you want to add:"<<endl;
    		    getline(cin,details);
    		    cout<<"enter the day of the task"<<endl;
    		    cin>>day;
    		    cout<<"enter the month of the task"<<endl;
    		    cin>>month;
    		    myCalendar.addTask(month, day, details);
    		    break;
    	
    	    case 2:
    		    cout<<"enter the day of the task you want to remove:"<<endl;
    		    cin>>rday;
    		    cout<<"enter the month of the task you want to remove:"<<endl;
    		    cin>>rmonth;
    		    myCalendar.removeTask(rmonth, rday);
    		    break;
    		
    	    case 3:
    		    myCalendar.displayTasks();
    		    break;
    		
    	    case 4:
    		    cout<<"thank you for using our calender"<<endl;
    		    exit(0);
    		    break;
    		
    	    default:
    		    cout << "wrong choice, the program will pause for a few seconds then try again" << endl;
                sleep(3); 
                system("cls");
                continue; 
    		
        }
    }
    return 0;

}
