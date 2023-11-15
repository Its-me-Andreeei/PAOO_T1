#include "workingStudent.hpp"
#include <string.h>
#include <iostream>

namespace student {

    WorkingStudent::WorkingStudent(const char *jobName, float salary, const char *name, unsigned int age, unsigned int averageGrade)
        : StudentManager(name, age, averageGrade)
    {
         this->jobName = new char[strlen(jobName) + 1];
         this->salary = new float(salary);

         strcpy(this->jobName, jobName);

        #ifdef DEBUG
            std::cout<<"Derived class basic constructor called : "<<__LINE__<<std::endl;
        #endif
    }

    void WorkingStudent::printStudentData(void) {
        std::cout<<name<<" "<<getAge()<<" "<<jobName<<" "<<*salary<<" "<<getAverageGrade()<<std::endl;
    }

    void WorkingStudent::printWelcomeMessage(void) {
        std::cout<<"Hello, "<<name<<", the working student"<<std::endl;
    }

    WorkingStudent::~WorkingStudent() {
        delete salary;
        delete[] jobName;

        #ifdef DEBUG
            std::cout<<"Derived class destructor called : "<<__LINE__<<std::endl;
        #endif
    }

    void WorkingStudent::setJobName(char *newJobName){
        strcpy(jobName, newJobName);
    }

    void WorkingStudent::setSalary(float newSalary) {
        *salary = newSalary;
    }
    char *WorkingStudent::getJobName(void) {
        return jobName;
    }
    float WorkingStudent::getSalary(void) {
        return *salary;
    }
}