// Convert AR codes from RetroArch into a usable format for melonDS
#include "functions.h"

int main(int argc, char **argv) {
    bool result;
    bool status = true;
    while (status == true) {
        char *buffer = malloc(sizeof(char) * MAXSIZE);
        UserInput(buffer);
        result = stringcheck(buffer);
        if (result == true) {
            converter(buffer);
            printf("%s\n",buffer);
            free(buffer);
            status = false;
        } else {
            printf("\nInvaild input\n");
            free(buffer);
            continue;
        }
    }
    return 0;
}
