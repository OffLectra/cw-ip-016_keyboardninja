#include "get_str.h"
#include "load_lvl.h"
#include "seporate_str.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void load_lvl(string language, int lvl)
{
    string control_lvl = get_str(lvl);
    string lvl_file;

    int purpose;
    double time;
    int errors;
    seporate_str(control_lvl, purpose, time, errors);

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

