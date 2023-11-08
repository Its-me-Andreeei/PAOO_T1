#include <iostream>
#include "StudentManager/studentManager.hpp"
#include "StudentManager/workingStudent.hpp"
#include "StudentManager/hardWorkingStudent.hpp"

using namespace std;
using namespace student;

int main() {
    WorkingStudent s1("SW-Dev", 10, "Ana", 21, 8);
    WorkingStudent s2("SW-Tester", 11, "Maria", 22, 9);
    HardWorkingStudent s5("SW-Testeer", 13, "Mariaa", 24, 9);
    StudentManager *s4 = &s1;
    cout<<"Before any operation printing:"<<endl;
    s1.printStudentData();
    s2.printStudentData();

    s1.printWelcomeMessage();
    s4->printWelcomeMessage();
    s4 = &s5;
    s4->printWelcomeMessage();

    WorkingStudent s3 =std:: move(s1);

    return 0;
}