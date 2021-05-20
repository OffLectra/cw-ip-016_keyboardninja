#include "select_str.h"
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string select_str(string path, int number_lines, vector<int>& used_str)
{
    srand(time(NULL));

    ifstream file(path);

    string element;

    if (!file.is_open()) {
        cout << "Error open file" << endl;
    } else {
        bool choice;
        int choise_sentence;
        do {
            choice = false;
            choise_sentence = rand() % number_lines;
            for (unsigned int i = 0; i < used_str.size(); ++i) {
                if (used_str[i] == choise_sentence) {
                    choice = true;
                    break;
                }
            }
        } while (choice);
        used_str.push_back(choise_sentence);

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
