#include "results.h"
#include "getch.h"
#include <iostream>

using namespace std;

void results(
        int errors,
        double time,
        int number_characters,
        int pass_lvl,
        bool& is_next_lvl)
{
    system("clear");
    double accuracy = ((number_characters - errors) * 100) / number_characters;
    if (accuracy < 0.0)
        accuracy = 0.0;
    double char_per_min = number_characters / (time / 60);

    cout << "RESULTS:" << endl;
    cout << "Time: " << time << "sec" << endl;
    cout << "Errors: " << errors << endl;
    cout << "Accuracy: " << accuracy << "%" << endl;
    cout << "Number of characters per minute: " << char_per_min << endl;

    switch (pass_lvl) {
    case lvl_pass:
        cout << "Level passed!" << endl;
        is_next_lvl = true;
        break;
    case over_time:
        cout << "Level not passed: time exceeded!" << endl;
        is_next_lvl = false;
        break;
    case over_errors:
        cout << "Level not passed: number of errors exceeded!" << endl;
        is_next_lvl = false;
        break;
    case over_time_errors:
        cout << "Level not passed: time and number of errors exceeded!" << endl;
        is_next_lvl = false;
        break;
    }
    int input;
    cout << endl << "For exit press Enter" << endl;
    do {
        input = getch();
    } while (input != 10);
    system("clear");
}
