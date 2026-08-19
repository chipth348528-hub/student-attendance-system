#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>
using namespace std;

struct Subject {
    string subjectId;
    string subjectCode;
    string subjectName;
    int credits;

    Subject() {}

    Subject(string id, string code, string name, int credits)
        : subjectId(id), subjectCode(code),
          subjectName(name), credits(credits) {}
};

#endif
