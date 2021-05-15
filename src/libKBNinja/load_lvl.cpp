#include "load_lvl.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void load_lvl(string language, int lvl)
{
    string path = "src/resources/control.txt";
    string str;
    string lvl_file;

    ifstream file(path);
    if (!file.is_open())
        cout << "Error open file!";
    else {
        int number_current_str = 0;
        while (getline(file, str)) {
            if (number_current_str == lvl - 1) {
                break;
            }
            number_current_str++;
        }
        char separator = ';';

        vector<string> elements;

        stringstream ss(str);
        string item;
        while (getline(ss, item, separator)) {
            elements.push_back(item);
        }

        //int purpose = stoi(elements[0]);
        //int time = stoi(elements[1]);
        //int errors = stoi(elements[2]);
        if (language == "RU") {
            if (lvl >= 1 && lvl <= 3) {
                lvl_file = "resources/symbol_RU.txt";
            }
            if (lvl >= 4 && lvl <= 6) {
                lvl_file = "resources/words_RU.txt";
            }
            if (lvl >= 7 && lvl <= 9) {
                lvl_file = "resources/sentence_RU.txt";
            }
            if (lvl >= 10 && lvl <= 12) {
                lvl_file = "resources/paragraph_RU.txt";
            }
        } else if (language == "EN") {
            if (lvl >= 1 && lvl <= 3) {
                lvl_file = "resources/symbol_EN.txt";
            }
            if (lvl >= 4 && lvl <= 6) {
                lvl_file = "resources/words_EN.txt";
            }
            if (lvl >= 7 && lvl <= 9) {
                lvl_file = "resources/sentence_EN.txt";
            }
            if (lvl >= 10 && lvl <= 12) {
                lvl_file = "resources/paragraph_EN.txt";
            }
        } else {
            cout << "Error language" << endl;
        }
    }
}
