/*
Name: Hamza Sheikh
Date:20/3/24
Roll no: 23k-0060
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Course {
private:
    string courseCode;
    string courseName;
    int creditHours;

public:
    Course(string code, string name, int hours) : courseCode(code), courseName(name), creditHours(hours) {}
    string getCourseCode() const { return courseCode; }
    string getCourseName() const { return courseName; }
    int getCreditHours() const { return creditHours; }
};

class Student {
private:
    string studentID;
    string studentName;
    vector<Course> enrolledCourses;

public:
    Student(string id, string name) : studentID(id), studentName(name) {}
    void enroll(const Course& course) {
        enrolledCourses.push_back(course);
    }
    void drop(const Course& course) {
        for (auto it = enrolledCourses.begin(); it != enrolledCourses.end(); ++it) {
            if (it->getCourseCode() == course.getCourseCode()) {
                enrolledCourses.erase(it);
                break;
            }
        }
    }

    int getTotalCreditHours() const {
        int totalHours = 0;
        for (const auto& course : enrolledCourses) {
            totalHours += course.getCreditHours();
        }
        return totalHours;
    }

    void printEnrolledCourses() const {
        cout << "Enrolled Courses:" << endl;
        for (const auto& course : enrolledCourses) {
            cout << "Course Code: " << course.getCourseCode() << ", Name: " << course.getCourseName() << ", Credit Hours: " << course.getCreditHours() << endl;
        }
    }
};

int main() {
 
    Course course1("CSCI101", "programming fundamentals", 3);
    Course course2("MATH202", "Calculus II", 4);
    Course course3("PHYS101", "digital logic design", 3);
    Student student("S12345", "hamza sheikh");
    student.enroll(course1);
    student.enroll(course2);
    student.enroll(course3);
    student.printEnrolledCourses();
    student.drop(course2);
    student.printEnrolledCourses();

    cout << "Total Credit Hours: " << student.getTotalCreditHours() << endl;

    return 0;
}

