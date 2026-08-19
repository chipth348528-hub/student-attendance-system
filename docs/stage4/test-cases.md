# Test Cases

## Student Attendance System

This document contains test cases for the Student Attendance System.

| Test Case ID | Test Case | Input | Expected Result | Status |
|---|---|---|---|---|
| TC01 | Add a new student | Valid student ID, full name, and class | Student is added successfully | Pass |
| TC02 | Add student with empty ID | Empty student ID | System rejects the input | Pass |
| TC03 | Add student with empty name | Empty full name | System rejects the input | Pass |
| TC04 | View student list | Select student list function | System displays all students | Pass |
| TC05 | Record attendance | Valid student ID, date, and status | Attendance record is saved successfully | Pass |
| TC06 | Record attendance for invalid student | Non-existing student ID | System displays an error message | Pass |
| TC07 | Record Present status | Valid student ID and Present status | Attendance is recorded as Present | Pass |
| TC08 | Record Absent status | Valid student ID and Absent status | Attendance is recorded as Absent | Pass |
| TC09 | View attendance records | Select attendance records | System displays attendance records | Pass |
| TC10 | View attendance report | Select attendance report | System displays the attendance report | Pass |
| TC11 | Invalid menu option | Enter an option that does not exist | System displays an error message | Pass |
| TC12 | Exit system | Select Exit option | System terminates successfully | Pass |

## Testing Result

All basic functions of the Student Attendance System were tested.

The test results show that the main student management, attendance recording, and attendance reporting functions work as expected.
