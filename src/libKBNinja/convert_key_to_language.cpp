#include "convert_key_to_language.h"
#include <iostream>
#include <string>

using namespace std;

string convert_key_to_language(int key)
{
    if (key == 0)
        return "RU";
    else if (key == 1)
        return "EN";
    else
        return "Error";
}
