#include "studentClass.hpp"

namespace student {
    template<class T>
    T studentClass<T>::computeAverageOfAllStudents() {
        unsigned n = 0;
        unsigned int s = 0;
        for(auto i = list.begin(); i != list.end(); i++) {
            s += (*i)->getAverageGrade();
            n++;
        }
        return ((T)s)/((T)n);
    }
}