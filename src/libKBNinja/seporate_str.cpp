#include "seporate_str.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void seporate_str(string str, int &purpose, double &time, int &errors)
{
    char separator = ';';

    vector<string> elements;

    stringstream ss(str);
    string item;
    while (getline(ss, item, separator)) {
        elements.push_back(item);
    }
    purpose = stoi(elements[0]);
    time = (double)stoi(elements[1]);
    errors = stoi(elements[2]);
}
