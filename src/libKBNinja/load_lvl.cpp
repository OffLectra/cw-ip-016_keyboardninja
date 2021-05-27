#include "choose_path.h"
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

    int purpose;
    double time;
    int errors;
    seporate_str(control_lvl, purpose, time, errors);

    string path = choose_path(language, lvl);
}
