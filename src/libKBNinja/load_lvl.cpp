#include "load_lvl.h"
#include "choose_path.h"
#include "get_str.h"
#include "lvl.h"
#include "seporate_str.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void load_lvl (string language,int number_lvl)
{
    string control_lvl = get_str(number_lvl);

    int purpose = 0;
    double time = 0.0;
    int errors = 0;
    seporate_str(control_lvl, purpose, time, errors);

    string path = choose_path(language, number_lvl);

    lvl(path, purpose, errors, time);
}
