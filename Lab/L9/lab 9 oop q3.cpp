/*
Name : Hamza Sheikh
id: 23k-0060
purpose: payroll management system
*/

#include <iostream>
#include <string>

using namespace std;
class Employee {

	protected:
    	int employeeID;
    	string employeeName;

	public:
		Employee(int id, const string& name) : employeeID(id), employeeName(name) {}
    	virtual double calculatePay() const {
        	return 0.0; 
    	}
    	virtual void displayDetails() const {
        	cout<< "Employee ID: "<<employeeID << ", Name: "<<employeeName;
    	}
};
class FullTimeEmployee : public Employee {
	private:
    	double monthlySalary;

	public:
    	FullTimeEmployee(int id, const string& name, double salary) : Employee(id, name), monthlySalary(salary) {}
    	double calculatePay() const override {
        	return monthlySalary;
    	}
    	void displayDetails() const override {
        	Employee::displayDetails();
        	cout<<", Type: Full-time, Monthly Salary: "<<monthlySalary << endl;
    	}
};
class PartTimeEmployee : public Employee {
	private:
    	double hourlyWage;
    	double hoursWorked;
	
	public:
    	PartTimeEmployee(int id, const string& name, double wage, double hours) : Employee(id, name), hourlyWage(wage), hoursWorked(hours) {}

    	double calculatePay() const override {
        	return hourlyWage * hoursWorked;
    	}

    	void displayDetails() const override {
        	Employee::displayDetails();
        	cout<<", Type: Part-time, Hourly Wage: "<< hourlyWage <<", Hours Worked: "<<hoursWorked<<endl;
    	}
};

int main() {
	cout<<"Hamza Sheikh\n23k-0060\n\n"<<endl;
    FullTimeEmployee fullTimeEmp(10, "murtaza",6000);
    PartTimeEmployee partTimeEmp(11, "muneeb", 15,45);

    cout<<"Displaying Details:"<<endl;
    fullTimeEmp.displayDetails();
    partTimeEmp.displayDetails();

    cout<<"\nCalculating Pay:"<<endl;
    cout<<"Full-time Employee Pay: $" <<fullTimeEmp.calculatePay()<<endl;
    cout<<"Part-time Employee Pay: $" <<partTimeEmp.calculatePay()<<endl;
    Employee* empPtr = &fullTimeEmp;
    cout<<"\nUsing base class pointer to calculate Full-time Employee Pay: $" << empPtr->calculatePay() << endl;

    return 0;
}
