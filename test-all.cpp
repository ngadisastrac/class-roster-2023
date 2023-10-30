/**
 * This is a program that will test all the operations of
 * the Student and ClassRoster classes.
 *
*/

#include "student.h"
#include "class_roster.h"

#include <cassert>
#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;

int main(int argc, char* argv[]){
    // Test Class Student
    //      - Test the Constructor
    //      - Test the ToString
    //      - Test Equals
    //      - Test Read
    //      - Test Write
    //      - Test GetName
    //      - Test GetID

    Student a("johny", "83888");
    assert(a.ToString() == "Student: johny, ID: 83888");
    assert(a.Equals(Student("johny", "83888")));
    assert(!a.Equals(Student("johny", "81888")));
    assert(a.Equals(a));
    stringstream data("Annie 98111\nPetra 99321");
    a.Read(data);
    assert(a.Equals(Student("Annie", "98111")));
    stringstream out;
    a.Write(out);
    assert(out.str() == "Annie 98111");
    assert(a.GetName() == "Annie");
    assert(a.GetID() == "98111");


    cout << "ALL TEST PASSED.... YOU ARE AMAZING!!!" << endl;
    return 0;
}










