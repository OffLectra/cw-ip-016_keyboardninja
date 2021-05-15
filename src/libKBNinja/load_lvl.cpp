#include "load_lvl.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void load_lvl(string language, int lvl)
{
    string path = "src/resources/control.txt";
    language = "ss"; //Врменная пременная для запуска
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
        char separator = ';';

        vector<string> elements;

        stringstream ss(str);
        string item;
        while (getline(ss, item, separator)) {
            elements.push_back(item);
        }
        
        int purpose = stoi(elements[0]);
        int time = stoi(elements[1]);
        int errors = stoi(elements[2]);
    }
}
