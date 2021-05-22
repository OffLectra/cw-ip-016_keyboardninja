#include "menu.h"
#include "getch.h"
#include <iostream>
using namespace std;
int menu()
{
    int key = 0;
    int input;
    do {
        system("clear");
        key = (key + 4) % 4;
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
        input = getch();
        if (input == 27) {
            input = getch();
            if (input == 91) {
                input = getch();
                if (input == 66)
                    key++;
                if (input == 65)
                    key--;
            }
        }
    } while (input != 10);

    system("clear");
    return key;
}
