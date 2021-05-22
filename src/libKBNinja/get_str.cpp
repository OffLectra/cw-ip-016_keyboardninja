#include "get_str.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string get_str(int lvl)
{
    string path = "src/resources/control.txt";
    string str;
    ifstream file(path);

    if (!file.is_open())
        cout << "Error open file!";
    else {
        int number_current_str = 0;
        while (getline(file, str)) {
            if (number_current_str == lvl - 1) {
                break;
            }
            number_current_str++;
        }
    }
    file.close();
    
    return str;
}
