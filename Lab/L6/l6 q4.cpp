/*
Name: Hamza Sheikh
Date:20/3/24
Roll no: 23k-0060
*/

#include <iostream>
using namespace std;

inline float BattingAverage(int runs, int dismissals) {
    if (dismissals == 0) {
        return 0; 
    }
    return float(runs)/dismissals;
}

inline float StrikeRate(int runs, int BallsFaced) {
    if (BallsFaced == 0) {
        return 0; 
    }
    return float(runs) / BallsFaced *100;
}

int main() {
    int runs, dismissals, BallsFaced;

    cout<<"Enter total runs scored: ";
    cin>>runs;

    cout<<"Enter total dismissals: ";
    cin>>dismissals;

    cout<< "Enter total balls faced: ";
    cin>>BallsFaced;

    float battingAverage = BattingAverage(runs, dismissals);
    float strikeRate = StrikeRate(runs, BallsFaced);

    cout << "Batting Average: " << battingAverage << endl;
    cout << "Strike Rate: " << strikeRate << endl;

    return 0;
}

