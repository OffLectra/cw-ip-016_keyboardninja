#include "count_number_of_str.h"
#include "lvl.h"
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void lvl(string path, int purpose)
{
    srand(time(NULL));
    ifstream file(path);

    if (!file.is_open()) {
        cout << "Error open file" << endl;
    } else {
        int number_lines = count_number_of_str(path);

        for (int i = 0; i < purpose; ++i) {
            string str;
            int choise_sentence = rand() % number_lines;
            int number_current_str = 0;
            file.seekg(0);
            while (getline(file, str)) {
                if (number_current_str == choise_sentence) {
                    break;
                }
                number_current_str++;
            }
            cout << str << endl;
        }
    }
}
