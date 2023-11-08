#pragma once
#include "studentManager.hpp"

namespace student {
    class WorkingStudent : public StudentManager {
        char *jobName;
        float *salary;
        public:
            WorkingStudent(char *jobName, float salary, char *name, unsigned int age, unsigned int averageGrade);
            ~WorkingStudent();
            WorkingStudent(WorkingStudent &&obj);

            void printStudentData(void);
            virtual void printWelcomeMessage(void);
            void setJobName(char *newJobName);
            void setSalary(float newSalary);
            char *getJobName(void);
            float getSalary(void);
    };
}