#pragma once
#include "studentManager.hpp"

namespace student {
    class WorkingStudent : public StudentManager {
        char *jobName;
        float *salary;
        public:
            WorkingStudent(const char *jobName, float salary, const char *name, unsigned int age, unsigned int averageGrade);
            ~WorkingStudent();

            void printStudentData(void);
            virtual void printWelcomeMessage(void);
            void setJobName(char *newJobName);
            void setSalary(float newSalary);
            char *getJobName(void);
            float getSalary(void);
    };
}