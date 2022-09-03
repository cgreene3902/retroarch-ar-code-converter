#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX 10000 // idk how big to make this, so lets just be safe and make it fairly large

char * UserInput()
{
    static char out[MAX];

    printf("Copy and paste the cheat into here or press Control+C to exit: ");
    scanf("%s", out);
    
    return out;
}

int stringcheck(char *_input)
{
    int index, maximum=strlen(_input);
    int test = 0, plus = 0, alnum = 0, status = 0;

    for (index = 0; index < maximum; index++)
    {
        test = isalnum(_input[index]);
        if (test == 8)
            alnum++;
        if (_input[index] == '+')
            plus++;
    }
    if (alnum % 16 == 0 && plus >= 1)
        status = 1;
    else
        status = 0;

    return status;
}

char * converter(char *_input)
{
    int plus, index;
    const int length = strlen(_input);
    static char out[MAX];
    plus=0;
    
    for (index=0; index < length; index++)
    {
        out[index] = _input[index];
        if (_input[index] == '+')
        {
            plus++;
            if (plus % 2 == 0)
                    out[index] = '\n';
            else
                    out[index] = ' ';
        }
    }
    return out;
}

void printing(char *_input)
{
    printf("\nCopy this into the melonDS cheat menu\n");
    printf("%s\n\n", _input);
}
