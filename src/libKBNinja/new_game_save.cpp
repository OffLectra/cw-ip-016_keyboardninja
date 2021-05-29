#include "new_game_save.h"
#include <fstream>
#include <iostream>
#include <string>

void new_game_save(string lang, int lvl)
{
    fstream savefile("save.txt");
    if (savefile.is_open()) {
        savefile << lang << endl;
        savefile << checklvl << endl;
    }
    savefile.close();
}
