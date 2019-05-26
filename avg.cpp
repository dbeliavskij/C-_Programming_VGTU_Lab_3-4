#include "func.h"


double avg(vector<int> marks, int exam) {

    double avgout=0;

    for (unsigned int i=0; i<marks.size(); i++) {

        avgout+=double(marks[i]);

    }

    return 0.4*(avgout/double(marks.size()))+0.6*double(exam);
}

