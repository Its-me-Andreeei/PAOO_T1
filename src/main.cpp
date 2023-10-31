#include <iostream>
#include "StudentManager/studentManager.hpp"

using namespace std;

int main() {

    StudentManager s1("Ana", 20, 8);
    StudentManager s2("Maria", 21);

    s1.getBestStudentByGrade(s2);
    s2.updateStudentGrade(10);
    s1.getBestStudentByGrade(s2);

    s1.printWelcomeMessage();
    s2.printWelcomeMessage();
    
    cout<<"Before assgignment:"<<endl;
    s1.printStudentData();
    s2.printStudentData();

    s1 = s2;

    cout<<"After assignment:"<<endl;
    s1.printStudentData();
    s2.printStudentData();

    return 0;
}