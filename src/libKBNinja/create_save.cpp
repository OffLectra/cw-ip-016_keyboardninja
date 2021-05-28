#include "create_save.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void create_save(string language, int lvl)
{
    string path = "src/resources/save.txt";
    ofstream file(path);
    if (file.is_open()) {
        file << language << endl;
        file << lvl << endl;
    }

    file.close();
}
