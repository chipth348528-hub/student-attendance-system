# Bug Report

## Student Attendance System

This document records bugs found during testing and their resolutions.

| Bug ID | Description | Steps to Reproduce | Expected Result | Actual Result | Severity | Status |
|---|---|---|---|---|---|---|
| BUG01 | Invalid student ID can be entered | Enter a non-existing student ID when recording attendance | System should reject the ID | System accepts the input | Medium | Identified |
| BUG02 | Empty student information | Leave student information empty | System should display an error | Empty information may be accepted | Medium | Identified |
| BUG03 | Invalid menu option | Enter an option outside the menu range | System should display an error message | Invalid option is entered | Low | Identified |
| BUG04 | Duplicate attendance record | Record attendance for the same student and date twice | System should prevent duplicate records | Duplicate record may be created | Medium | Identified |

## Debugging Process

1. Reproduce the problem.
2. Identify the cause of the error.
3. Modify the source code.
4. Compile the program again.
5. Run the related test case.
6. Verify that the problem has been fixed.

## Bug Management Result

The identified bugs were documented for further debugging and resolution.

The related test cases will be executed again after the bugs are fixed.
