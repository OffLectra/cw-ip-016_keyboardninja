#include "results.h"
#include <iostream>

using namespace std;

void results(int errors, double time, int number_characters, int pass_lvl)
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
        break;
    case over_time:
        cout << "Level not passed: time exceeded!" << endl;
        break;
    case over_errors:
        cout << "Level not passed: number of errors exceeded!" << endl;
        break;
    case over_time_errors:
        cout << "Level not passed: time and number of errors exceeded!" << endl;
        break;
    }
}
