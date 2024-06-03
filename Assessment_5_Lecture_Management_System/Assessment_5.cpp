//  Lecture Management System

#include <iostream>
#include <string>

using namespace std;

class Lecture {
private:
    string name;
    string subject;
    string course;
    int num_lectures;

public:
    // Constructor to initialize lecture details
    Lecture(string name = "", string subject = "", string course = "", int num_lectures = 0) {
        this->name = name;
        this->subject = subject;
        this->course = course;
        this->num_lectures = num_lectures;
    }

    // Function to add lecture details
    void addLectureDetails() {
        cout << "Enter lecturer's name: ";
        getline(cin, name);
        cout << "Enter subject name: ";
        getline(cin, subject);
        cout << "Enter course name: ";
        getline(cin, course);
        cout << "Enter number of lectures: ";
        cin >> num_lectures;
        cin.ignore();
    }

    // Function to display lecture details
    void displayLectureDetails() {
        cout << "\nLecturer's Name: " << name << endl;
        cout << "Subject name: " << subject << endl;
        cout << "Course name: " << course << endl;
        cout << "Number of Lectures: " << num_lectures << endl;
    }
};

int main() {
    Lecture lectures[5];

    cout << "<------------------ Lecture Management System ------------------>" << endl;

    // Adding details of 5 lecturers
    for (int i = 0; i < 5; ++i) {
        cout << "\n<--- Enter details for lecturer " << i+1 << "--->" << endl;
        lectures[i].addLectureDetails();
    }

    // Displaying details of all lecturers
    cout << "\nDisplaying details of all lecturers:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "\n<--- Lecturer " << i + 1 << "--->" << endl;
        lectures[i].displayLectureDetails();
    }

    return 0;
}
