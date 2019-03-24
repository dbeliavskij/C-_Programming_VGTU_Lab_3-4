#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Student {
    public:
        string name = "Name was not defined";
        string surname = "Surname was not defined";
        vector<int> mark;
        int exam=0;
        int nummarks=0;

};


vector<Student> student;

void menu(){

    int choose;

    while (choose!=0) {

        cout<<"This is the main menu\nPlease choose what actions you want to perform:\n";
        cout<<"To choose an action press number of the action and hit \"Enter\"\n";
        cout<<"1. Add new student and his/her marks\n";
        cout<<"2. Display existing entries\n";
        cin>>choose;

        switch(choose) {

            case 1:
                cout<<"First\n\n";
                break;

            case 2:
                cout<<"Second\n\n";
                break;

            case 0:
                break;

            default:
                cout<<"Wrong input\nTo choose an action press number of the action and hit \"Enter\"\n\n";
                break;

        }

    }

}

double avg(vector<int> marks, int exam) {

    double avgout=0;

    for (int i=0; i<marks.size(); i++) {

        avgout+=double(marks[i]);

    }

    return 0.4*(avgout/double(marks.size()))+0.6*double(exam);
}

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

void show() {

    cout<<setw(12)<<left<<"Name"<<setw(18)<<left<<"Surname"<<setw(18)<<left<<"Final points (Avg.)/Final points(Med.)"<<endl;
    cout<<setw(69)<<setfill('*')<<"*"<<endl;

    cout<<setfill(' ');

    for (int i=0;i<student.size();i++) {


        cout<<setw(12)<<left<<student[i].name;
        cout<<setw(18)<<left<<student[i].surname;
        cout<<setw(20)<<left<<avg(student[i].mark, student[i].exam);
        cout<<setw(18)<<left<<med(student[i].mark, student[i].exam)<<endl;

    }

}

void input() {

    string choose="y";

    while (choose!="n") {

        student.push_back(Student());

        int i=student.size()-1;

        cout<<"Input name of a student:\n";

        cin>>student[i].name;

        cout<<"Input surname of a student:\n";

        cin>>student[i].surname;

        cout<<"Do you want to input marks manually, if no, I will generate them randomly?\n";
        cout<< "Press y/n and hit \"Enter\"\n";
        string randch;
        cin>>randch;

        if (randch=="y") {

            cout<<"Keep inputing new marks by entering mark and pressing \"Enter\"\n";
            cout<<"When all marks have been inputed, input number smaller than 1 or bigger than 10 hit \"Enter\"\n";

            while (true) {

                int buffer;

                cin>>buffer;

                if (buffer<11&&buffer>0) {

                    student[i].mark.push_back(buffer);

                }
                else {
                    break;
                }


            }

            cout<<"Input exam result\n";

            cin>>student[i].exam;

            cout<<"Do you want to add one more student? (Enter \"y\" or \"n\")\n";

            cin>>choose;


            }

        else {

            int marksw;

            cout<<"How many marks should this student have?\n";

            cin>>marksw;

            srand(time(nullptr));

            for (int z=0; z<marksw; z++) {

                int g=rand()%10+1;

                student[i].mark.push_back(g);

            }

            student[i].exam=rand()%10+1;

            cout<<"Do you want to add one more student? (Enter \"y\" or \"n\")\n";

            cin>>choose;

        }

    }
}

int main()
{
    input();

    show();

    return 0;
}
