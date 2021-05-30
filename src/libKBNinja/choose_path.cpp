#include "choose_path.h"

#include <iostream>
#include <string>

using namespace std;

/*
choose_path - this function selects the path to the desired file with the
elements to enter
*/

string choose_path(string language, int lvl)
{
    const string file_path[]
            = {"src/resources/symbol_RU.txt",
               "src/resources/words_RU.txt",
               "src/resources/sentence_RU.txt",
               "src/resources/sparagraph_RU.txt",
               "src/resources/symbol_EN.txt",
               "src/resources/words_EN.txt",
               "src/resources/sentence_EN.txt",
               "src/resources/sparagraph_EN.txt"};
    string path;

    if (language == "RU") {
        if (lvl >= 1 && lvl <= 3) {
            path = file_path[0];
            break;
        }
        if (lvl >= 4 && lvl <= 6) {
            path = file_path[1];
            break;
        }
        if (lvl >= 7 && lvl <= 9) {
            path = file_path[2];
            break;
        }
        if (lvl >= 10 && lvl <= 12) {
            path = file_path[3];
            break;
        }
    }

    if (language == "EN") {
        if (lvl >= 1 && lvl <= 3) {
            path = file_path[4];
            break;
        }
        if (lvl >= 4 && lvl <= 6) {
            path = file_path[5];
            break;
        }
        if (lvl >= 7 && lvl <= 9) {
            path = file_path[6];
            break;
        }
        if (lvl >= 10 && lvl <= 12) {
            path = file_path[7];
            break;
        }
    }

    return path;
}
