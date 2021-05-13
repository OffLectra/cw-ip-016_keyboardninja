#include <cstdio>
#include <termios.h>

static struct termios parameters;

/*
new_terminal - procedure for changing terminal parameters
*/
void new_terminal()
{
    tcgetattr(0, &parameters);
    parameters.c_lflag &= ~ICANON;
    parameters.c_lflag &= ~ECHO;
    tcsetattr(0, TCSANOW, &parameters);
}

/*
getch - 1 character reading function
*/
char getch()
{
    char characte;
    new_terminal();
    characte = getchar();
    return characte;
}	
