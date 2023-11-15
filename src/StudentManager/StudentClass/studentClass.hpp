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

        explicit studentClass(const vector <shared_ptr<WorkingStudent>> &list) : list(list) {}

        T computeAverageOfAllStudents();
        template <typename G> void getNoOfGradesGreaterThen(G threshold);
    };
}