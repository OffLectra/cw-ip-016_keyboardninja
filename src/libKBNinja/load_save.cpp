#include "load_save.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void load_save(string& lang, int& lvl)
{
    string save;
    string path = "src/resources/save.txt";
    ifstream savefile(path);
    if (!savefile.is_open())
        cout << "Error";

    int check = 0;
    while (getline(savefile, save)) {
        check++;
        if (check == 1) {
            lang = save;
        }
        if (check == 2) {
            lvl = atoi(save.c_str());
        }
    }
    savefile.close();
}
