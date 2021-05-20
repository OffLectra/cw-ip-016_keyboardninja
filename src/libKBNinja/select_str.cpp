#include "select_str.h"
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string select_str(string path, int number_lines)
{
    srand(time(NULL));

    ifstream file(path);

    string element;

    if (!file.is_open()) {
        cout << "Error open file" << endl;
    } else {
        int choise_sentence = rand() % number_lines;
        int number_current_str = 0;

        while (getline(file, element)) {
            if (number_current_str == choise_sentence) {
                break;
            }
            number_current_str++;
        }
        file.close();
    }

    return element;
}
