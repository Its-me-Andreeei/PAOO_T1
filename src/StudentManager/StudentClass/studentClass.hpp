#pragma once
#include <vector>
#include "../studentManager.hpp"
#include "../workingStudent.hpp"


using namespace std;
namespace student {
    template <typename T>
    class studentClass {
        private:
            vector<shared_ptr<WorkingStudent>> list;
        public:

        template<typename G>
        void getNoOfGradesGreaterThen(G threshold) {
            int nr = 0;

            for(auto i = list.begin(); i != list.end(); i++) {
                if((*i)->getAverageGrade() > threshold)
                    nr++;
            }
            std::cout<<nr<<std::endl;
        }
        explicit studentClass(const vector <shared_ptr<WorkingStudent>> &list) : list(list) {}

        T computeAverageOfAllStudents();
    };

    template <typename T>
    T addGrades(T n1, T n2);
}