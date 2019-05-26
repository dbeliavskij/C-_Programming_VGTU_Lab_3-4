#include "func.h"


int main()
{
    int choose;

    while (choose!=0) {

        cout<<"This is the main menu\nPlease choose what actions you want to perform:\n";
        cout<<"To choose an action press number of the action and hit \"Enter\"\n";
        cout<<"1. Add new student and his/her marks\n";
        cout<<"2. Display existing entries\n";
        cout<<"3. Read entries from file\n";
        cout<<"0. Exit\n";
        cin>>choose;
//        system("CLR || clear");
        switch(choose) {

            case 1:
                input(student);
                cout<<student.size();
                break;

            case 2:
                show(student);
                break;

            case 3:
                read(student);
                break;

            case 0:
                break;

            default:
                cout<<"Wrong input\nTo choose an action press number of the action and hit \"Enter\"\n\n";
                break;

        }

    }
    cin.ignore(256, '\n');                         /// pauses blokas, veikia bet kokioje sistemoje.
 //   cout << "Press enter any key to continue...";
//    cin.get();
    return 0;
}
