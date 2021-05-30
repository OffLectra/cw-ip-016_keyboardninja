#include "count_number_of_str.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

/*
count_number_of_str - this function does a count of the number of lines in the
file
*/

int count_number_of_str(string path)
{
    ifstream file(path);

    int count_str = 0;
    string str;

    while (!file.eof()) {
        getline(file, str);
        count_str++;
    }

    file.close();

    return count_str;
}
