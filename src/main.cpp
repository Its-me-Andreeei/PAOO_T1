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

    return 0;
}