#include <iostream>
#include <string>

using namespace std;

class Account{
	int accountNum;
	double balance;
	public:
		Account(int num, double b){
			accountNum=num;
			balance=b;
		}
		int getaccNum(){
			return accountNum;
		}
			double getbalance(){
			return balance;
		}
		
		virtual void deposit(double amount)=0;
		virtual void withdraw(double n)=0;
		 virtual void calculateinterest()=0;
};

class SavingsAccount:public Account{
	double interestrate;
	public:
		SavingsAccount(int num, double b, double rate): Account(num,  b){
			interestrate=rate;
		}
		void deposit (double amount) override{
			double ball=getbalance();
			ball+= amount;
		}
		void withdraw (double n) override{
			double ball=getbalance();
			ball-= n;
		}
		void calculateinterest()override{
			double ball=getbalance();
		cout<<"interest is"<< ball * interestrate<<endl;
		}
};
class CurrentAccount:public Account{
	double overdraftlimit;
	public:
			CurrentAccount(int num, double b, double limit): Account(num,  b){
			overdraftlimit=limit;
		}
		void deposit (double amount) override{
			double ball=getbalance();
			ball+= amount;
		}
		void withdraw (double n) override{
			double ball=getbalance();
			ball-= n;
		}
		void calculateinterest () override{
		cout<<"no interest in current account"<<endl;
		}
};

int main(){
    SavingsAccount s1(1, 500, 2.0);
    CurrentAccount c1(2, 1000, 5000);
    
    s1.calculateinterest();
    c1.calculateinterest();
    
    return 0;
}
