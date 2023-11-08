#pragma once

#include "StudentManager.hpp"
#include <iostream>

namespace student {
    class HardWorkingStudent : public StudentManager {
        public:
            void printWelcomeMessage(void) {
                std::cout << "Hello, Hard Working Student!"<<std::endl;
            }
            HardWorkingStudent(char *jobName, float salary, char *name, unsigned int age, unsigned int averageGrade) : StudentManager(name, age, averageGrade) {}
            void printStudentData(void) {std::cout<<"No extra data here"<<std::endl;}
            ~HardWorkingStudent(){}
    };
}