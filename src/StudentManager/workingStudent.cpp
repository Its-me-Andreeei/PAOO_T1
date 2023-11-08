#include "workingStudent.hpp"
#include <string.h>
#include <iostream>

namespace student {

    WorkingStudent::WorkingStudent(WorkingStudent &&obj) : WorkingStudent(obj.getJobName(), obj.getSalary(), obj.getName(), obj.getAge(), obj.getAverageGrade())
    {
        obj.setAge(0);
        obj.setAverageGrade(0);
        obj.setName("");
        obj.setSalary(0);
        obj.setJobName("");
        #ifdef DEBUG
            std::cout<<"Move constructor called : "<<__LINE__<<std::endl;
        #endif      
    }

    WorkingStudent::WorkingStudent(char *jobName, float salary, char *name, unsigned int age, unsigned int averageGrade) 
        : StudentManager(name, age, averageGrade)
    {
         this->jobName = new char[strlen(jobName) + 1];
         this->salary = new float(salary);

         strcpy(this->jobName, jobName);
         //*this->salary = salary;

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