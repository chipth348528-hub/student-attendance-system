#include <iostream>
#include <vector>
#include <string>

#include "Student.h"
#include "Attendance.h"
#include "Teacher.h"
#include "Class.h"
#include "Subject.h"

using namespace std;

vector<Student> students;
vector<Attendance> attendanceRecords;

void addStudent() {
    Student student;

    cout << "\nEnter Student ID: ";
    cin >> student.studentId;

    cin.ignore();
    cout << "Enter Full Name: ";
    getline(cin, student.fullName);

    cout << "Enter Class Name: ";
    getline(cin, student.className);

    students.push_back(student);

    cout << "Student added successfully!\n";
}

void showStudents() {
    cout << "\n===== STUDENT LIST =====\n";

    if (students.empty()) {
        cout << "No students found.\n";
        return;
    }

    for (const Student& student : students) {
        cout << "ID: " << student.studentId
             << " | Name: " << student.fullName
             << " | Class: " << student.className << endl;
    }
}

void markAttendance() {
    Attendance record;

    cout << "\nEnter Student ID: ";
    cin >> record.studentId;

    cout << "Enter Date (DD/MM/YYYY): ";
    cin >> record.date;

    cout << "Enter Status (Present/Absent/Late): ";
    cin >> record.status;

    attendanceRecords.push_back(record);

    cout << "Attendance recorded successfully!\n";
}

void showAttendance() {
    cout << "\n===== ATTENDANCE RECORDS =====\n";

    if (attendanceRecords.empty()) {
        cout << "No attendance records found.\n";
        return;
    }

    for (const Attendance& record : attendanceRecords) {
        cout << "Student ID: " << record.studentId
             << " | Date: " << record.date
             << " | Status: " << record.status << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n====================================\n";
        cout << "     STUDENT ATTENDANCE SYSTEM\n";
        cout << "====================================\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Mark Attendance\n";
        cout << "4. View Attendance Records\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                showStudents();
                break;

            case 3:
                markAttendance();
                break;

            case 4:
                showAttendance();
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
