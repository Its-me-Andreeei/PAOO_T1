#pragma once
#include <iostream>

namespace student {

    class StudentManager {
        unsigned int *age;
        unsigned int *averageGrade;
        protected:
        char *name;
        public:
            StudentManager(char *name, unsigned int age);
            StudentManager(char *name, unsigned int age, unsigned int averageGrade);
            StudentManager(const StudentManager &obj); /*Copy constructor*/
            ~StudentManager();
           
            char *getBestStudentByGrade(const StudentManager& s);
            
            void setAverageGrade(unsigned int newGrade);
            void setAge(unsigned int newAge);
            void setName(char *newName);
            char *getName();
            unsigned int getAge();
            unsigned int getAverageGrade();

            virtual void printStudentData(void) = 0; /*Pure virtual function*/ 
            virtual void printWelcomeMessage(void) {
                std::cout<<"Hello, student!"<<std::endl;
            } /*Pure virtual function*/
    };
}