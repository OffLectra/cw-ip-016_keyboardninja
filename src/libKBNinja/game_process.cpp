#include "about.h"
#include "create_save.h"
#include "error_lvl.h"
#include "language.h"
#include "levels.h"
#include "load_lvl.h"
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
    bool is_next_lvl;
    int menu_item;
    load_save(lang, lvl);

    do {
        menu_item = menu();
        switch (menu_item) {
        case 0:
            lang = language();
            lvl = 1;
            new_game(lang, lvl);
            load_lvl(lang, lvl, is_next_lvl);
            create_save(lang, lvl, is_next_lvl);
            break;
        case 1:
            level = false;
            if (lang != "") {
                do {
                    chooselvl = levels();
                    if (chooselvl != 20) {
                        if (chooselvl > lvl) {
                            error_lvl();
                            chooselvl = 0;
                        } else {
                            level = true;
                            load_lvl(lang, lvl, is_next_lvl);
                            create_save(lang, lvl, is_next_lvl);
                        }
                    } else {
                        level = true;
                        is_menu = true;
                    }
                } while (level == false);
            } else
                is_menu = true;
            break;
        case 2:
            about();
            break;
        case 3:
            is_menu = false;
            break;
        }
    } while (is_menu == true);
}
