///Klase nieko nenaudoja, jai biblioteku ir linku nereikia nes ja naudoja kiti failai
#pragma once
#ifndef __STUDENT_H__
#define __STUDENT_H__

///std trumpiniai
using std::string;
using std::vector;

class Student {
    public:
        string name = "Name was not defined";
        string surname = "Surname was not defined";
        vector<int> mark;
        int exam=0;
        int nummarks=0;

};

///globalus kintamasis jam turi buti rezervuojama atmintys, taip daroma nes kompiliatorius turi zinuoti juos kieki is anksto.
static vector<Student> student;

#endif // STUDENT_H
