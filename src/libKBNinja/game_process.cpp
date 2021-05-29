#include "about.h"
#include "error_lvl.h"
#include "language.h"
#include "levels.h"
#include "load_save.h"
#include "menu.h"
#include "new_game_save.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void game_process()
{
    string lang;
    bool is_menu = true;
    bool level = false;
    int lvl;
    int chooselvl = 0;
    int menu_item;
    load_save(lang, lvl);
    do {
        menu_item = menu();
        switch (menu_item) {
        case 0:
            lang = language();
            lvl = 1;
            new_game(lang, lvl);
            is_menu = false;
            break;
        case 1:
            level = false;
            is_menu = false;
            if (lang != "") {
                do {
                    chooselvl = levels();
                    if (chooselvl != 20) {
                        if (chooselvl > lvl) {
                            error_lvl();
                            chooselvl = 0;
                        } else
                            level = true;
                    } else {
                        level = true;
                        is_menu = true;
                    }
                } while (level == false);
            }
            else is_menu = true;
            break;
        case 2:
            about();
            break;
        case 3:
            is_menu = false;
            break;
        }
    } while (is_menu == true);
    cout << lang << lvl;
}
