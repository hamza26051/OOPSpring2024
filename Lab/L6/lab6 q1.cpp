/*
Name: Hamza Sheikh
Date:20/3/24
Roll no: 23k-0060
*/

#include <iostream>
#include <string>

using namespace std;

class BankAccount{
	private:
		int accountid;
		double balance;
		int* transactionhistory;
		int numtransaction;
		
		public:
			BankAccount(int id, double bal, int history[],int num){
				accountid=id;
				balance=bal;
				numtransaction=num;
				 transactionhistory = new int[numtransaction];
				int i;
				for (i=0;i<numtransaction;i++){
					transactionhistory[i]=history[i];
				}
			}
			BankAccount(const BankAccount& other){
				accountid=other.accountid;
				balance=other.balance;
				numtransaction=other.numtransaction;
				 transactionhistory = new int[numtransaction];
				int i;
				for (i=0;i<numtransaction;i++){
				transactionhistory[i]=	other.transactionhistory[i];
				}
			}
			~BankAccount(){
			delete [] transactionhistory;
			}
			
			
			void displaydetails(){
				cout<<"the account id is"<<accountid<<endl;
				cout<<"the account balance is"<<balance<<endl;
				int i;
				for(i=0;i<numtransaction;i++){
					cout<<"transaction history"<<i<<"is"<<transactionhistory[i]<<endl;
					
				}
			}
			void updatetransactionhistory( double newtransaction){
				int newnum=numtransaction+1;
				int* newtransactionhistory= new int[newnum];
				
				int i;
				for(i=0;i<newnum; i++){
					newtransactionhistory[i]=transactionhistory[i];
				}
				
				newtransactionhistory[newnum-1]= newtransaction;
				
				delete [] transactionhistory;
				
				transactionhistory=newtransactionhistory;
				numtransaction=newnum;
			}
};

int main() {
    int history[] = {100, 200, 300};
    BankAccount b1(123456, 1000.0, history, 3);
    b1.displaydetails();

BankAccount b2=b1;
b2.displaydetails();
    cout << "Adding new transaction..." << endl;
    b1.updatetransactionhistory(400);
    b1.displaydetails();

    return 0;
}
