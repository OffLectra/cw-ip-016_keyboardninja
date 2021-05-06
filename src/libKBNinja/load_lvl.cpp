#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void load_lvl(string language, int lvl)
{
    string path = "src/resources/control.txt";
    ifstream file(path);
    if (!file.is_open())
        cout << "Error open file!";
    else {
    
    }
}

