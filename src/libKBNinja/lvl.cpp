#include "lvl.h"
#include "count_number_of_str.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void lvl(string path)
{
    ifstream file(path);

    if (!file.is_open()) {
        cout << "Error open file" << endl;
    } else {
        int number_lines = count_number_of_str(path);

        cout << number_lines << endl;
    }
}
