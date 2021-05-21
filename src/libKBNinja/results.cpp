#include "results.h"
#include <iostream>

using namespace std;

void results(int errors, double time)
{
    system("clear");

    cout << "RESULTS:" << endl;
    cout << "Time: " << time << "sec" << endl;
    cout << "Errors: " << errors << endl;
}
