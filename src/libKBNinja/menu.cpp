#include "menu.h"
#include <iostream>

int menu()
{
    int key = 0;

    do {
        if (key == 0) {
            cout << "<New game>" << endl << endl << endl;
        } else {
            cout << "New game" << endl << endl << endl;
        }

        if (key == 1) {
            cout << "<Continue>" << endl << endl << endl;
        } else {
            cout << "Continue" << endl << endl << endl;
        }

        if (key == 2) {
            cout << "<About>" << endl << endl << endl;
        } else {
            cout << "About" << endl << endl << endl;
        }

        if (key == 3) {
            cout << "<Exit>" << endl << endl << endl;
        } else {
            cout << "Exit" << endl << endl << endl;
        }

    } while (1);

    return key;
}
