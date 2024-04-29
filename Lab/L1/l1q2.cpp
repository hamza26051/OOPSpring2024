#include <iostream>

struct student { // making a structure
    int maths;
    int eng;
    int science;
};

int main() {
    int n;
    std::cout << "enter the number of students: ";
    std::cin >> n;

    struct student students[n];
    int i;

    for (i = 0; i < n; i++) { //loop
        int avg;
        std::cout << "enter the mark of maths: ";
        std::cin >> students[i].maths;

        std::cout << "enter the mark of eng: ";
        std::cin >> students[i].eng;

        std::cout << "enter the mark of science: ";
        std::cin >> students[i].science;

        avg = (students[i].maths + students[i].eng + students[i].science) / 3;
        std::cout << "the average is: " << avg << std::endl;

        if (avg >= 90) { //grading condition
            std::cout << "grade a" << std::endl;
        } else if (avg >= 80 && avg <= 89) {
            std::cout << "grade b" << std::endl;
        } else if (avg >= 70 && avg <= 79) {
            std::cout << "grade c" << std::endl;
        } else if (avg >= 60 && avg <= 69) {
            std::cout << "grade d" << std::endl;
        } else {
            std::cout << "grade f" << std::endl;
        }
    }

    return 0;
}


