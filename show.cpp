#include "func.h"

void show(vector<Student> &student) {

    cout<<student.size();

    sort(student.begin(), student.end(), [](const Student& lhs, const Student& rhs)
         {

    return lhs.name < rhs.name;

});

    cout<<setw(12)<<left<<"Name"<<setw(18)<<left<<"Surname"<<setw(18)<<left<<"Final points (Avg.)/Final points(Med.)"<<endl;
    cout<<setw(69)<<setfill('*')<<"*"<<endl;

    cout<<setfill(' ');

    for (unsigned int i=0;i<student.size();i++) {


        cout<<setw(12)<<left<<student[i].name;
        cout<<setw(18)<<left<<student[i].surname;
        cout<<setw(20)<<left<<avg(student[i].mark, student[i].exam);
        cout<<setw(18)<<left<<med(student[i].mark, student[i].exam)<<endl;

    }

}
