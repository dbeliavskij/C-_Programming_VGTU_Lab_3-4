#include "func.h"


void input(vector<Student> &student) {

    string choose="y";

    while (choose!="n") {

        student.push_back(Student());

        int i=student.size()-1;

        cout<<"Input name of a student:\n";

        cin>>student[i].name;

        cout<<"Input surname of a student:\n";

        cin>>student[i].surname;


        cout<<"Do you want to input marks manually, if no, I will generate them randomly?\n";
        cout<< "Press y for yes, anything for no and hit \"Enter\"\n";
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

                    bool cond=false;

        do {
            cout<<"How many marks should this student have?\n";

            cin>>marksw;

            cond = cin.fail();
            if (cond) {
                cout<<"Wrong input\nPlease enter an integer value\n";
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (marksw<1) {
                cout<<"Wrong input\nPlease enter an integer value\n";
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cond=true;
            }
        } while(cond);



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
