//
// Created by Carlos R. Arias on 10/30/23.
//

#ifndef CLASS_ROSTER_2023_STUDENT_H
#define CLASS_ROSTER_2023_STUDENT_H

#include <iostream>
#include <string>

using std::istream;
using std::ostream;
using std::string;

class Student {
private:
    string _name;
    string _id;
public:
    Student(const string& name, const string& id);
    string ToString()const;
    bool Equals(const Student& rhs)const;
    void Read(istream& input);
    void Write(ostream& output)const;
    string GetName()const;
    string GetID()const;

};


#endif //CLASS_ROSTER_2023_STUDENT_H

















