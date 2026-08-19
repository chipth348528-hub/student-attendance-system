#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <string>
using namespace std;

struct Attendance {
    string studentId;
    string date;
    string status;

    Attendance() {}

    Attendance(string id, string date, string status)
        : studentId(id), date(date), status(status) {}
};

#endif
