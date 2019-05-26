#include "func.h"

void read(vector<Student> &student) {

    ifstream studfile("students.txt");
    if (studfile.is_open()) {

        studfile.ignore(255, '\n');

        while(!studfile.eof()) {

            student.push_back(Student());

            getline(studfile, student[student.size()-1].surname, ' ');

            getline(studfile, student[student.size()-1].name, ' ');

            for (int i=0; i<5; i++) {
                string m;

                getline(studfile,m, ' ');

                student[student.size()-1].mark.push_back(stoi(m));

            }

          studfile.ignore(255, '\n');

        }


    }

studfile.close();
}

