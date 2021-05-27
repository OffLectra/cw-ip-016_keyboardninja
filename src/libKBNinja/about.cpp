#include "about.h"
#include "getch.h"
#include <iostream>
using namespace std;

void about()
{
    int input;
    cout << "Programm made in 2021" << endl;
    cout << "Autors:" << endl;
    cout << "Alexey Egoshin | alexegoshin0403@yandex.ru" << endl;
    cout << "Maxim Valter | maxuswill@yandex.ru" << endl;
    cout << "Ilya Zaicev | ilyazaytsev2017@bk.ru" << endl << endl;

    cout << "For exit press Enter" << endl;
    do {
        input = getch();
    } while (input != 10);
    system("clear");
}
