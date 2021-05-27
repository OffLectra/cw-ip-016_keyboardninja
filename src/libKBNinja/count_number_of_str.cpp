#include "count_number_of_str.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int count_number_of_str(string path)
{
    ifstream file(path);

    int count_str = 0;
    string str;
    while (!file.eof()) {
        getline(file, str);
        count_str++;
    }

    return count_str;
}
