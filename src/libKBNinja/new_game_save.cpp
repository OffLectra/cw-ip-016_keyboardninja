#include "new_game_save.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
void new_game(string lang, int lvl)
{
    string path = "src/resources/save.txt";
    ofstream savefile(path);
    if (savefile.is_open()) {
        savefile << lang << endl;
        savefile << lvl << endl;
    }
    savefile.close();
}
