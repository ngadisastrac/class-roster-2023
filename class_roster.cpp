//
// Created by Carlos R. Arias on 10/30/23.
//

#include "class_roster.h"

ClassRoster::ClassRoster() {
    _numStudents = _numSubjects = 0;
    _subjects = nullptr;
    _students = nullptr;
    _grades = nullptr;
}

ClassRoster::ClassRoster(const ClassRoster &cr) {
    // Later
}

const ClassRoster &ClassRoster::operator=(const ClassRoster &rhs) {
    return *this;
}

ClassRoster::~ClassRoster() {
    for (int i = 0; i < _numStudents; ++i) {
        delete _students[i];
    }
    delete[] _students;
    delete[] _subjects;
    for (int i = 0; i < _numStudents; ++i) {
        delete[] _grades[i];
    }
    delete[] _grades;
}

int ClassRoster::FindStudentPosition(string id) const {
    for (int i = 0; i < _numStudents; ++i) {
        if (_students[i]->GetID() == id)
            return i;
    }
    return -1;
}

int ClassRoster::FindSubjectPosition(string subject) const {
    for (int i = 0; i < _numSubjects; ++i) {
        if (_subjects[i] == subject)
            return i;
    }
    return -1;
}

Student *ClassRoster::GetStudent(int position) const {
    if (position >= _numStudents || position < 0)
        return nullptr;
    return _students[position];
}

string ClassRoster::GetSubject(int position) const {
    if (position >= _numStudents || position < 0)
        return "";
    return _subjects[position];
}

double ClassRoster::GetGrade(int studentPosition, int subjectPosition) const {
    if (studentPosition >= _numStudents || subjectPosition >= _numSubjects || studentPosition < 0 || subjectPosition < 0)
        return -1;
    return _grades[studentPosition][subjectPosition];
}

bool ClassRoster::SetGrade(int studentPosition, int subjectPosition, double grade) {

    if (studentPosition >= _numStudents || subjectPosition >= _numSubjects) {
        return false;
    } else {
        _grades[studentPosition][subjectPosition] = grade;
        return true;
    }


}

bool ClassRoster::AddStudentSubject(const Student &newStudent, const string &newSubject) {

    if (_numStudents > 0) {
        return false;
    }
    _students = new Student*[1];
    _subjects = new string[1];
    _grades = new double* [1];
    _grades[0] = new double;
    _grades[0][0] = 0.0;
    _students[0] = new Student(newStudent);
    _subjects[0] = newSubject;
    _numStudents = 1;
    _numSubjects = 1;

    return false;
}

bool ClassRoster::AddSubject(const string &newSubject) {
    return false;

}

bool ClassRoster::AddStudent(const Student &newStudent) {
    if ((_students[_numStudents] = new Student(newStudent))){
        return true;
    }
    return false;
}

double ClassRoster::GetCourseAverage() const {
    return 0;
}

double ClassRoster::GetStudentAverage(int position) const {
    return 0;
}

double ClassRoster::GetSubjectAverage(int position) const {
    return 0;
}

void ClassRoster::Write(ostream &output) const {

}

void ClassRoster::Read(istream &output) {

}

int ClassRoster::GetNumberOfStudents() const {
    return 0;
}

int ClassRoster::GetNumberOfSubjects() const {
    return 0;
}
