#include "create_save.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void create_save(string language, int lvl, bool is_next_lvl)
{
    string path = "src/resources/save.txt";
    ofstream file(path);
    if (file.is_open()) {
        file << language << endl;
        file << lvl << endl;
        if (is_next_lvl)
            file << 1;
        else
            file << 0;
    }
    file.close();
}
