#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

struct Student {
    string studentId;
    string fullName;
    string className;

    Student() {}

    Student(string id, string name, string className)
        : studentId(id), fullName(name), className(className) {}
};

#endif
