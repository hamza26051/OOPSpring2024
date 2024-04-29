#include <iostream>
#include <string>

using namespace std;

class WeekDays {
private:
    string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int currentDay;

public:
    WeekDays() {
        currentDay = 0;
    }

    WeekDays(int curr) {
        currentDay = curr;
        if (curr > 6) {
            cout << "Invalid day\n";
            exit(1);
        }
    }

    string getCurrentDay() {
        return days[currentDay];
    }

    string getNextDay() {
        return days[(currentDay + 1) % 7];
    }

    string getPreviousDay() {
        return days[(currentDay - 1 + 7) % 7];
    }

    string getNthDay(int n) {
        return days[(currentDay + n) % 7];
    }
};

int main() {
    WeekDays week(1);
	int n=3;
    cout << "Current Day: " << week.getCurrentDay() << endl;
    cout << "Next Day: " << week.getNextDay() << endl;
    cout << "Previous Day: " << week.getPreviousDay() << endl;
    cout << n << " day:"<< week.getNthDay(n);
return 0;
}
