#include "language.h"
#include "about.h"
#include "menu.h"
#include <iostream>
#include <string>
using namespace std;

void game_process()
{
    string lang = language();
    bool is_menu = true;
    int menu_item;

    do {
        menu_item = menu();
        switch (menu_item) {
        case 0:
            break;
        case 1:
            break;
        case 2: about();
            break;
        case 3:
            is_menu = false;
            break;
        }
    } while (is_menu == true);
}
