#include "game_process.h"

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

/*
game_process - a function that links all the remaining pieces of code in the
application: launches the menu, level selection, the level itself, and so on
*/

void game_process()
{
    string lang; // responsible for selecting the language in which the input
                 // will be performed
    bool is_menu = true;  // responsible for displaying the menu
    bool level = false;   // responsible for change lvl
    int lvl;              // responsible for the level
    int chooselvl = 0;    // the number of the selected level, by default 0
    bool is_next_lvl;     // responsible for whether the next level is open
    int menu_item;        // responsible for the selected menu item
    load_save(lang, lvl); // loading a save from a file

    do {
        menu_item = menu(); // calling the menu function, which returns the
                            // selected item
        switch (menu_item) {
        case 0:
            lang = language();   // calling the language selection function
            lvl = 1;             // set it to the initial level-1
            new_game(lang, lvl); // resetting the save

            // calling the function that starts the level
            load_lvl(lang, lvl, is_next_lvl);

            // calling the create save function
            create_save(lang, lvl, is_next_lvl);
            break;
        case 1:
            level = false;
            if (lang != "") {
                do {
                    chooselvl = levels(); // calling the level map display
                                          // function
                    if (chooselvl != 20) {
                        if (chooselvl > lvl) {
                            error_lvl();   // display an error message
                            chooselvl = 0; // resetting the selected level
                        } else {
                            level = true; // level selected - exit the loop
                            
                            // calling the function that starts the level
                            load_lvl(lang, lvl, is_next_lvl);

                            // calling the create save function
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
            about(); // calling a function that shows information about
                     // developers
            break;
        case 3:
            is_menu = false; // exit the main loop and end the application
            break;
        }
    } while (is_menu == true);
}
