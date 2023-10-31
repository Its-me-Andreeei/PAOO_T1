#include "studentManager.hpp"
#include <string.h>
#include <iostream>

using namespace std;

StudentManager::StudentManager(char *name, unsigned int age) {
    this->name = new char[strlen(name) + 1];
    this->age = new unsigned;
    this->averageGrade = new unsigned;

    strcpy(this->name, name);
    *this->age = age;
    *this->averageGrade = 0u;
    #ifdef DEBUG
        cout<<"Normal constructor called "<<__LINE__<<endl;
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
        cout<<"Normal constructor called "<<__LINE__<<endl;
    #endif
}

StudentManager::~StudentManager() {
    delete age;
    delete averageGrade;
    delete [] name;

    #ifdef DEBUG
        cout<<"Destructor called "<<__LINE__<<endl;
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
        cout<<"Copy constructor called "<<__LINE__<<endl;
    #endif
}

void StudentManager::printWelcomeMessage() {
    std::cout << "Hello, " << this->name << std::endl;
}

char *StudentManager::getBestStudentByGrade(const StudentManager s) {
    if(this->averageGrade >= s.averageGrade)
        return this->name;
    else
        return s.name;
}

StudentManager StudentManager::operator=(StudentManager &obj) {
    if(strlen(name) < strlen(obj.name)) {
        //not enough memory for target memory => realocate memory
        delete[] name; //release old resource in order to allocate enough
        name = new char[strlen(obj.name)+1];
        #ifdef DEBUG
            cout<<"Not enough memory for this assginment. Allocating more memory "<<__LINE__<<endl;
        #endif
    }
    strcpy(name, obj.name);
    *age = *obj.age;
    *averageGrade = *obj.averageGrade;
    
    return *this;
}

void StudentManager::printStudentData(void) {
            cout<<name<<" "<<*age<<" "<<*averageGrade<<endl;
        }
