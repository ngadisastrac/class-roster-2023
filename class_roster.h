//
// Created by Carlos R. Arias on 10/30/23.
//

#ifndef CLASS_ROSTER_2023_CLASS_ROSTER_H
#define CLASS_ROSTER_2023_CLASS_ROSTER_H

#include "student.h"
#include <iostream>
#include <string>
using std::istream;
using std::ostream;
using std::string;

class ClassRoster {
private:
    Student** _students;
    string* _subjects;
    int _numStudents;
    int _numSubjects;
    double** _grades;
public:
    ClassRoster();
    ClassRoster(const ClassRoster& cr);
    const ClassRoster& operator=(const ClassRoster& rhs);
    ~ClassRoster();

    int FindStudentPosition(string id)const;
    int FindSubjectPosition(string subject)const;

    Student* GetStudent(int position)const;
    string GetSubject(int position)const;
    double GetGrade(int studentPosition, int subjectPosition)const;
    bool SetGrade(int studentPosition, int subjectPosition, double grade);

    bool AddSubject(const string& newSubject);
    bool AddStudent(const Student& newStudent);

    double GetCourseAverage()const;
    double GetStudentAverage(int position)const;
    double GetSubjectAverage(int position)const;

    void Write(ostream& output)const;
    void Read(istream& output);

};


#endif //CLASS_ROSTER_2023_CLASS_ROSTER_H
