#include "convert_key_to_language.h"

#include <iostream>
#include <string>

using namespace std;

/*
convert_key_to_language - this function converts the selected item to the
language
*/

string convert_key_to_language(int key)
{
    if (key == 1) {
        return "EN";
    }
    if (key == 0) {
        return "RU";
    }
}
