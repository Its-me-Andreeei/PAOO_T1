#include <iostream>
#include "StudentManager/studentManager.hpp"
#include "StudentManager/workingStudent.hpp"
#include "StudentManager/hardWorkingStudent.hpp"
#include "StudentManager/StudentClass/studentClass.hpp"
#include <memory>
#include <vector>

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

    auto p1 = make_unique<WorkingStudent>("SW-Dev", 10, "Ana", 21, 8);
    p1->printStudentData();
    unique_ptr<WorkingStudent> p2 = std::move(p1);
    p2->printStudentData();

    //memory automatically dealocated by unique_ptr
    vector<shared_ptr<WorkingStudent>> list = {
            make_shared<WorkingStudent>("SW-Dev", 10, "Ana", 21, 8),
            make_shared<WorkingStudent>("SW-Tester", 11, "Maria", 22, 9)};

    studentClass<int> s(list);

    s.getNoOfGradesGreaterThen<double>(1);
    return 0;
}