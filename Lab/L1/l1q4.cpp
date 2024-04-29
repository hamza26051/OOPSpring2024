#include <iostream>
#include <string>

struct Event {
    std::string name;
    std::string date;
    std::string venue;
    std::string organizer;
};

int main() {
    int n;
    std::cout << "Enter the number of events: \n";
    std::cin >> n;
    
    Event events[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Enter the name of the event: \n";
        std::cin >> events[i].name;

        std::cout << "Enter the date of the event: \n";
        std::cin >> events[i].date;

        std::cout << "Enter the venue of the event: \n";
        std::cin >> events[i].venue;

        std::cout << "Enter the organizer of the event: \n";
        std::cin >> events[i].organizer;
    }

    std::string find;
    std::cout << "Enter the date to find the event: \n";
    std::cin >> find;

    int flag = 0;

    for (int i = 0; i < n; i++) {
        if (find == events[i].date) {
            std::cout << "Event Details:\n";
            std::cout << "Name: " << events[i].name << "\n";
            std::cout << "Date: " << events[i].date << "\n";
            std::cout << "Venue: " << events[i].venue << "\n";
            std::cout << "Organizer: " << events[i].organizer << "\n";
            flag = 1;
        }
    }

    if (flag == 0) {
        std::cout << "No event found for the entered date.\n";
    }

    return 0;
}


