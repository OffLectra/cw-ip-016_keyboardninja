#include <ctest.h>
#include <string>

using namespace std;

#include <libKBNinja/choose_path.h>

CTEST(choose_path, RU_1)
{
    string language = "RU";
    int lvl = 1;
    string path = "src/resources/symbol_RU.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, RU_5)
{
    string language = "RU";
    int lvl = 5;
    string path = "src/resources/words_RU.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, RU_9)
{
    string language = "RU";
    int lvl = 9;
    string path = "src/resources/sentence_RU.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, RU_11)
{
    string language = "RU";
    int lvl = 11;
    string path = "src/resources/paragraph_RU.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}
