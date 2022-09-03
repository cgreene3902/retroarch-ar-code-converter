// Convert AR codes from RetroArch into a usable format for melonDS
#include <stdio.h>
#include "functions.h"

int main()
{
    char *in, *out;
    int result;
    in = UserInput();
    result = stringcheck(in);
    if (result == 1)
    {
        out = converter(in);
        printing(out);
    }
    else
    {
        printf("\nInvaild input\n");
        main(); // restart to allow user to try again
    }
    return 0;
}
