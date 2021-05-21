#include "results.h"
#include <iostream>

using namespace std;

void results(int errors, double time, int number_characters)
{
    system("clear");

    double accuracy = ((number_characters - errors) * 100) / number_characters;
    double char_per_min = number_characters / (time / 60);

    cout << "RESULTS:" << endl;
    cout << "Time: " << time << "sec" << endl;
    cout << "Errors: " << errors << endl;
    cout << "Accuracy: " << accuracy << "%" << endl;
    cout << "Number of characters per minute: " << char_per_min << endl;
}
