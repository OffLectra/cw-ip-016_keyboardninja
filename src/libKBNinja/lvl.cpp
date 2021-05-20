#include "lvl.h"
#include "count_number_of_str.h"
#include "getch.h"
#include "select_str.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void lvl(string path, int purpose)
{
    int number_lines = count_number_of_str(path);

    vector<int> used_str;
    used_str.reserve(purpose);

    for (int i = 0; i < purpose; ++i) {
        system("clear");
        string str = select_str(path, number_lines, used_str);

        cout << str << endl;

        for (unsigned int i = 0; i < str.length(); ++i) {
            char tmp = getch();
            while (tmp != str[i]) {
                tmp = getch();
            }
            cout << tmp;
        }
    }
}
