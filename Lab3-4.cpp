#include <iostream>
#include <iomanip>
using namespace std;

class Student {
    public:
        string name = "Name was not defined";
        string surname = "Surname was not defined";

};

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


    }

int main()
{
    input();

    return 0;
}
