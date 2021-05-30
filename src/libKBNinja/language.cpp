#include "language.h"

#include "convert_key_to_language.h"
#include "getch.h"
#include "constants.h"

#include <iostream>
#include <string>

using namespace std;

string language()
{
    int key = 0;
    int input;
    
    do {
        system("clear");
        
        cout << "Choose language:" << endl;
        
        key = (key + 2) % 2;
        
        if (key == 0)
            cout << "<Russian>" << endl;
        else
            cout << "Russian" << endl;

        if (key == 1)
            cout << "<English>" << endl;
        else
            cout << "English" << endl;

        input = getch();
        
        if (input == funct_button) {
            input = getch();
            if (input == arrows) {
                input = getch();
                if (input == up)
                    key++;
                if (input == down)
                    key--;
            }
        }
    } while (input != enter);
    
    system("clear");
    
    return convert_key_to_language(key);
}
