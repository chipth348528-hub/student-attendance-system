#ifndef CLASS_H
#define CLASS_H

#include <string>
using namespace std;

struct Class {
    string classId;
    string className;
    string academicYear;

    Class() {}

    Class(string id, string name, string year)
        : classId(id), className(name), academicYear(year) {}
};

#endif
