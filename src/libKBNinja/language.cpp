#include "language.h"
#include "getch.h"
#include <iostream>

using namespace std;
int language()
{
    int key = 0;
    int input;
    do {
        system("clear");
        cout << "Choose language:" << endl;
        key = (key + 2) % 2;
        if (key == 0)
            cout << "<Russian>" << endl;
        else
            cout << "Russian" << endl;

        if (key == 1)
            cout << "<English>" << endl;
        else
            cout << "English" << endl;

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
