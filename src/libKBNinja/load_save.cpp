#include "load_save.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void load_save(string& lang, int& lvl)
{
    const string path = "src/resources/save.txt";
    string str;

    ifstream savefile(path);
    if (!savefile.is_open())
        cout << "Error open file with save!" << endl;
    else {
        int current_str = 0;
        while (getline(savefile, str)) {
            current_str++;
            if (current_str == 1) {
                lang = str;
            }
            if (current_str == 2) {
                lvl = atoi(str.c_str());
            }
        }
    }
    savefile.close();
}
