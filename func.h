#pragma once
#ifndef __FUNC_H__
#define __FUNC_H__


#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "student.h"

///std trumpiniai
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::setw;
using std::setprecision;
using std::left;
using std::right;
using std::setfill;
using std::cin;
using std::fstream;
using std::ifstream;


///funkciju antrastes
double avg(vector<int> marks, int exam);
double med(vector<int> marks, int exam);
void show(vector<Student> &student);
void input(vector<Student> &student);
void read(vector<Student> &student);

#endif // __FUNC_H__
