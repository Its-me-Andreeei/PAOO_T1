#include "studentManager.hpp"
#include <string.h>
#include <iostream>

using namespace std;

namespace student {
    StudentManager::StudentManager(char *name, unsigned int age) {
        this->name = new char[strlen(name) + 1];
        this->age = new unsigned;
        this->averageGrade = new unsigned;

        strcpy(this->name, name);
        *this->age = age;
        *this->averageGrade = 0u;
        #ifdef DEBUG
            cout<<" Base Normal constructor called "<<__LINE__<<endl;
        #endif
    }

    StudentManager::StudentManager(char *name, unsigned int age, unsigned int averageGrade) {
        this->name = new char[strlen(name) + 1];
        this->age = new unsigned;
        this->averageGrade = new unsigned;

        strcpy(this->name, name);
        *this->age = age;
        *this->averageGrade = averageGrade;

        #ifdef DEBUG
            cout<<"Base Normal constructor called "<<__LINE__<<endl;
        #endif
    }

    StudentManager::~StudentManager() {
        delete age;
        delete averageGrade;
        delete [] name;

        #ifdef DEBUG
            cout<<"Base Destructor called "<<__LINE__<<endl;
        #endif
    }

    StudentManager::StudentManager(const StudentManager &obj) {
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);

        age = new unsigned;
        *age = *obj.age;

        averageGrade = new unsigned;
        *averageGrade = *obj.averageGrade;

        #ifdef DEBUG
            cout<<"Base Copy constructor called "<<__LINE__<<endl;
        #endif
    }

    char *StudentManager::getBestStudentByGrade(const  StudentManager& s) {
        if(this->averageGrade >= s.averageGrade)
            return this->name;
        else
            return s.name;
    }

    void StudentManager::printStudentData(void) {
        cout<<name<<" "<<*age<<" "<<*averageGrade<<endl;
    }

    void StudentManager::setAverageGrade(unsigned int newGrade){
        *averageGrade = newGrade;
    }
    void StudentManager::setAge(unsigned int newAge) {
        *age = newAge;
    }
    void StudentManager::setName(char *newName) {
        strcpy(name, newName);
    }
    char *StudentManager::getName() {
        return name;
    }
    unsigned int StudentManager::getAge() {
        return *age;
    }
    unsigned int StudentManager::getAverageGrade() {
        return *averageGrade;
    }
}