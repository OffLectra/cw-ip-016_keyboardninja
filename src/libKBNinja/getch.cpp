#include <cstdio>
#include <termios.h>

static struct termios old_parameters, new_parameters;

/*
new_terminal - procedure for changing terminal parameters
*/
void new_terminal()
{
    tcgetattr(0, &old_parameters);
    new_parameters = old_parameters;
    new_parameters.c_lflag &= ~ICANON;
    new_parameters.c_lflag &= ~ECHO;
    tcsetattr(0, TCSANOW, &new_parameters);
}

/*
old_terminal - procedure for restoring old terminal parameters
*/
void old_terminal()
{
    tcsetattr(0, TCSANOW, &old_parameters);
}

/*
getch - 1 character reading function
*/
char getch()
{
    char characte;
    new_terminal();
    characte = getchar();
    old_terminal();
    return characte;
}
