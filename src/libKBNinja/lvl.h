#pragma once

#include "check_pass_lvl.h"
#include "count_number_of_str.h"
#include "getch.h"
#include "results.h"
#include "select_str.h"

#include <iostream>
#include <string>
void lvl(std::string path, int purpose, int max_errors, double max_time, bool& is_next_lvl);
