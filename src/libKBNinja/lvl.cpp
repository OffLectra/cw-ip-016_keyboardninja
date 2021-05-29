#include "lvl.h"

#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void lvl(
        std::string path,
        int purpose,
        int max_errors,
        double max_time,
        bool& is_next_lvl)
{
    int number_lines = count_number_of_str(path);

    vector<int> used_str;
    used_str.reserve(purpose);

    int errors = 0;
    int number_characters = 0;
    clock_t time_start, time_end;

    time(&time_start);

    for (int i = 0; i < purpose; ++i) {
        system("clear");
        string str = select_str(path, number_lines, used_str);

        number_characters += str.length();

        cout << str << endl;

        for (unsigned int i = 0; i < str.length(); ++i) {
            char tmp = getch();
            while (tmp != str[i]) {
                errors++;
                tmp = getch();
            }
            cout << tmp;
        }
    }

    time(&time_end);

    double time = difftime(time_end, time_start);

    int pass_lvl = check_pass_lvl(time, max_time, errors, max_errors);

    results(errors, time, number_characters, pass_lvl, is_next_lvl);
}
