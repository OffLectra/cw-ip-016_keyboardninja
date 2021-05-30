#include "error_lvl.h"
#include "getch.h"
#include <iostream>
using namespace std;

void error_lvl()
{
    int input;
    cout << "Level close" << endl;

    cout << "For continue press Enter" << endl;
    do {
        input = getch();
    } while (input != 10);
    system("clear");
}
