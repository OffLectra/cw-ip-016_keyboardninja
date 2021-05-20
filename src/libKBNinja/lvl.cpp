#include "lvl.h"
#include "count_number_of_str.h"
#include "select_str.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void lvl(string path, int purpose)
{
    int number_lines = count_number_of_str(path);

    for (int i = 0; i < purpose; ++i) {
        string str = select_str(path, number_lines);

        cout << str << endl;
    }
}
