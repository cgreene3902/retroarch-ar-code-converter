// Convert AR codes from RetroArch into a usable format for melonDS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "functions.h"

#define OUTPUTTEXT "\nCopy this into the cheat menu\n%s\n\n"

int main(int argc, char **argv) {
    int ArgState = ArgCheck(argc, argv);

    bool result, status = true;
    switch (ArgState) {
    case 0:
        while (status == true) {
            char *buffer = malloc(sizeof(char) * MAXSIZE);
            UserInput(buffer, MAXSIZE);
            result = StringCheck(buffer);
            if (result == true) {
                converter(buffer);
                printf(OUTPUTTEXT,buffer);
                free(buffer);
                status = false;
            } else {
                printf("\nInvaild input\n");
                free(buffer);
                continue;
            }
        }
        break;
    case 1:
        printf("%s", HELPTEXT);
        break;
    case 2:
        converter(argv[2]);
        printf(OUTPUTTEXT,argv[2]);
        break;
    default:
        printf("Invaild argument\n%s", HELPTEXT);
    }
    
    return 0;
}
