/*
    Name: hamza Sheikh
    Roll no: 23k-0060
*/
#include <iostream>

using namespace std;

class LoanHelper {
private:
    const float InterestRate;
    double LoanAmount;
    int Months;

public:
    LoanHelper(const float rate, double amount, int month) : InterestRate(rate), LoanAmount(amount), Months(month) {
    }

    double calculateMonthly() {
        double amountPerMonth = LoanAmount / Months;
        double interestAmount = amountPerMonth * InterestRate;
        double finalPrice = amountPerMonth + interestAmount;

        cout << "The total amount to be paid every month is: " << finalPrice << endl;
        return finalPrice;
    }
};

int main() {
    
    LoanHelper loan(0.4, 1000000, 12);


    loan.calculateMonthly();

    return 0;
}

