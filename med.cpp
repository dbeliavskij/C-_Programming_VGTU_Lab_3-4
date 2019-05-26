#include "func.h"

double med(vector<int> marks, int exam) {

    marks.push_back(exam);

    sort(marks.begin(), marks.end());

    if (marks.size()%2!=0) {

        return double(marks[int(marks.size()/2+0.5)]);

    }

    else {

        return double(marks[marks.size()/2]+marks[((marks.size()+1)/2)-1])/2;

    }
}
