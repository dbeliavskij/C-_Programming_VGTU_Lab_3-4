#include <iostream>
#include <iomanip>
using namespace std;

class Student {
    public:
        string name = "Name was not defined";
        string surname = "Surname was not defined";
        int mark[100];
        int nummarks=0;

};

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

void show() {

    cout<<setw(15)<<left<<"Name"<<setw(21)<<left<<"Surname"<<setw(21)<<left<<"Final points (Avg.)"<<endl;
    cout<<setw(59)<<setfill('*')<<"*"<<endl;

}

void input() {

    string choose="y";

    while (choose!="n") {

        int i=0;

        cout<<"Input name of a student:\n";

        cin>>newstudent[0].name;

        cin>>newstudent[0].surname;

        cout<<"Keep inputing new marks by entering mark and pressing \"Enter\"\n";
        cout<<"When all marks have been inputed, input any number higher than 10 and hit \"Enter\"\n";

        while (true) {

            int a;

            cin>>a;

            if (a<10) {

                newstudent[0].mark[i]=a;

                newstudent[0].nummarks++;

                i++;

            }

            else {

                break;

            }
        }

        cout<<newstudent[0].name<<endl;
        cout<<newstudent[0].surname<<endl;
        for (i=0; i<newstudent[0].nummarks; i++) {

            cout<<newstudent[0].mark[i]<<endl;

        }

        cout<<"Do you want to add one more student? (Enter \"y\" or \"n\")\n";

        cin>>choose;

        }
    }

int main()
{
    input();

    return 0;
}
