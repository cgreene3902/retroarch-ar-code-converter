#include "functions.h"

void UserInput(char *buffer, int size) {
    printf("Copy and paste the cheat into here or press Control+C to exit: ");
    int index;
    for (index = 0; index < size; index++) {
        char c = fgetc(stdin);
        if (c == '\n' || c == EOF) {
            break;
        } else
            buffer[index] = c;
    }
}

bool stringcheck(char *_input) {
    int index, maximum = strlen(_input);
    int test = 0, plus = 0, alnum = 0;
    bool status = false;
    for (index = 0; index < maximum; index++) {
        test = isalnum(_input[index]);
        if (test == 8)
            alnum++;
        if (_input[index] == '+')
            plus++;
    }
    if (alnum % 16 == 0 && plus >= 1 && plus % 2 != 0) {
        for (index = 0; index < maximum; index++) {
            if (index % 8 == 0 && _input[index] == '+')
                status = true;
            else
                continue;
        }
    } else
        status = false;
    return status;
}

void converter(char *_input) {
    int plus, index;
    const int length = strlen(_input);
    plus=0;
    
    for (index=0; index < length; index++) {
        if (_input[index] == '+') {
            plus++;
            if (plus % 2 == 0)
                    _input[index] = '\n';
            else
                    _input[index] = ' ';
        }
    }
}
