//
// Created by Carlos R. Arias on 10/30/23.
//

#include "student.h"

#include <sstream>

using std::stringstream;

Student::Student(const string &name, const string &id):_name(name), _id(id) {

}
// "Student: johny, ID: 83888"
string Student::ToString() const {
    stringstream ss;
    ss << "Student: " << _name << ", ID: " << _id;
    return ss.str();
}

bool Student::Equals(const Student &rhs) const {
    return (_id == rhs._id);
}

void Student::Read(istream &input) {
    input >> _name >> _id;
}

void Student::Write(ostream &output) const {
    output << _name << " " << _id;
}

string Student::GetName() const {
    return _name;
}

string Student::GetID() const {
    return _id;
}
