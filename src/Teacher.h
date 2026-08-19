#ifndef TEACHER_H
#define TEACHER_H

#include <string>
using namespace std;

struct Teacher {
    string teacherId;
    string fullName;
    string subject;

    Teacher() {}

    Teacher(string id, string name, string subject)
        : teacherId(id), fullName(name), subject(subject) {}
};

#endif
