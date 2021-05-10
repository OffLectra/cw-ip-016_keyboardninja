#include "load_lvl.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void load_lvl(string language, int lvl)
{
    string path = "src/resources/control.txt";

    string str;

    ifstream file(path);
    if (!file.is_open())
        cout << "Error open file!";
    else {
        int number_current_str = 0;
        while (getline(file, str)) {
            cout << number_current_str << endl;
            if (number_current_str == lvl) {
                break;
            }
            number_current_str++;
        }
        cout << str << endl;
    }
}
