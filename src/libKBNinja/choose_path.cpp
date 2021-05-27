#include <iostream>
#include <string>

using namespace std;

string choose_path(string language, int lvl)
{
    string path;
    if (language = "ru") {
        if (lvl >= 1 && lvl <= 3)
            path = "src/resources/symbol_RU.txt";
        if (lvl >= 4 && lvl <= 6)
            path = "src/resources/words_RU.txt";
        if (lvl >= 7 && lvl <= 9)
            path = "src/resources/sentence_RU.txt";
        if (lvl >= 10 && lvl <= 12)
            path = "src/resources/sparagraph_RU.txt";
    }
    if (language = "en") {
        if (lvl >= 1 && lvl <= 3)
            path = "src/resources/symbol_EN.txt";
        if (lvl >= 4 && lvl <= 6)
            path = "src/resources/words_EN.txt";
        if (lvl >= 7 && lvl <= 9)
            path = "src/resources/sentence_EN.txt";
        if (lvl >= 10 && lvl <= 12)
            path = "src/resources/sparagraph_EN.txt";
    }
    return path;
}
