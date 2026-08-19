#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string studentId;
    string fullName;
    string className;
};

struct Attendance {
    string studentId;
    string date;
    string status;
};

vector<Student> students;
vector<Attendance> attendanceRecords;

void addStudent() {
    Student s;

    cout << "Enter student ID: ";
    cin >> s.studentId;

    cin.ignore();
    cout << "Enter full name: ";
    getline(cin, s.fullName);

    cout << "Enter class: ";
    getline(cin, s.className);

    students.push_back(s);

    cout << "Student added successfully.\n";
}

void viewStudents() {
    if (students.empty()) {
        cout << "No students found.\n";
        return;
    }

    cout << "\n===== STUDENT LIST =====\n";

    for (const Student& s : students) {
        cout << "ID: " << s.studentId << endl;
        cout << "Name: " << s.fullName << endl;
        cout << "Class: " << s.className << endl;
        cout << "------------------------\n";
    }
}

void recordAttendance() {
    Attendance a;

    cout << "Enter student ID: ";
    cin >> a.studentId;

    cout << "Enter date (DD/MM/YYYY): ";
    cin >> a.date;

    cout << "Enter status (Present/Absent/Late): ";
    cin >> a.status;

    attendanceRecords.push_back(a);

    cout << "Attendance recorded successfully.\n";
}

void viewAttendance() {
    if (attendanceRecords.empty()) {
        cout << "No attendance records found.\n";
        return;
    }

    cout << "\n===== ATTENDANCE RECORDS =====\n";

    for (const Attendance& a : attendanceRecords) {
        cout << "Student ID: " << a.studentId << endl;
        cout << "Date: " << a.date << endl;
        cout << "Status: " << a.status << endl;
        cout << "-----------------------------\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT ATTENDANCE SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Record Attendance\n";
        cout << "4. View Attendance Records\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                viewStudents();
                break;

            case 3:
                recordAttendance();
                break;

            case 4:
                viewAttendance();
                break;

            case 0:
                cout << "Exiting system...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
