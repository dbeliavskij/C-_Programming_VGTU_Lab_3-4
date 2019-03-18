#include <iostream>
#include <iomanip>
using namespace std;

class Student {
    public:
        string name = "Name was not defined";
        string surname = "Surname was not defined";
        int mark[100];
        int exam=0;
        int nummarks=0;

};

int numst=0;


Student newstudent[1000];

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

double avg(int marks[], int nummarks, int exam) {

    double avgout=0;

    for (int i=0; i<nummarks; i++) {

        avgout+=double(marks[i]);

    }

    return 0.4*(avgout/double(nummarks))+0.6*double(exam);
}

void show() {

    cout<<setw(15)<<left<<"Name"<<setw(21)<<left<<"Surname"<<setw(21)<<left<<"Final points (Avg.)"<<endl;
    cout<<setw(59)<<setfill('*')<<"*"<<endl;

    cout<<setfill(' ');

    for (int i=0;i<numst;i++) {


        cout<<setw(15)<<left<<newstudent[i].name<<setw(21)<<left<<newstudent[i].surname<<setw(21)<<left<<avg(newstudent[i].mark, newstudent[i].nummarks, newstudent[i].exam)<<endl;

    }

}

void input() {

    string choose="y";

    int b=0;

    while (choose!="n") {

        int i=0;

        cout<<"Input name of a student:\n";

        cin>>newstudent[b].name;

        cout<<"Input surname of a student:\n";

        cin>>newstudent[b].surname;

        cout<<"Keep inputing new marks by entering mark and pressing \"Enter\"\n";
        cout<<"When all marks have been inputed, input any number higher than 10 and hit \"Enter\"\n";

        while (true) {

            int a;

            cin>>a;

            if (a<11) {

                newstudent[b].mark[i]=a;

                newstudent[b].nummarks++;

                i++;

            }

            else {

                break;

            }
        }

        cout<<"Input exam result\n";

        cin>>newstudent[b].exam;

        cout<<"Do you want to add one more student? (Enter \"y\" or \"n\")\n";

        cin>>choose;

        b++;

        numst++;

        }
    }



int main()
{
    input();

    show();

    return 0;
}
