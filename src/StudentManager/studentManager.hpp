#pragma once

class StudentManager {
    char *name;
    unsigned int *age;
    unsigned int *averageGrade;
    public:
        StudentManager(char *name, unsigned int age);
        StudentManager(char *name, unsigned int age, unsigned int averageGrade);
        StudentManager(const StudentManager &obj); /*Copy constructor*/
        ~StudentManager();
        StudentManager operator=(StudentManager &obj);
        void printWelcomeMessage(void);
        char *getBestStudentByGrade(const StudentManager s);
        void updateStudentGrade(unsigned int newGrade) {
            *this->averageGrade = newGrade;
        }
        void printStudentData(void);
};