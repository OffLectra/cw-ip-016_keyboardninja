#include "language.h"
#include "getch.h"
#include <iostream>

using namespace std;
int language()
{
    int key = 0;
    int input;
    do {
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

    } while ();
    return key;
}
