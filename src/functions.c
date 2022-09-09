#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "functions.h"

void ArgTest(int arg_n) {
    if (arg_n > 2) {
        fprintf(stderr, "Too many args\n%s", HELPTEXT);
        exit(EXIT_FAILURE);
    }
}

int ArgCheck(int NumOfArgs, char **args) {
    int state = 0;

    if (NumOfArgs != 1) {
        if (args[1][0] == '-') {
            switch (args[1][1]) {
            case 'i':
                ArgTest(NumOfArgs);
                state = 0;
                break;
            case 'h':
                ArgTest(NumOfArgs);
                state = 1;
                break;
            case 'a':
                if (StringCheck(args[2]) != false)
                    state = 2;
                else {
                    fprintf(stderr, "Invaild string input\n");
                    exit(2);
                } 
                break;
            default:
                ArgTest(NumOfArgs);
            }
        } else {
            fprintf(stderr, "Invaild argument\n%s", HELPTEXT);
            exit(EXIT_FAILURE);
        }
    } else
        state = 0;
    return state;
}

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

bool StringCheck(char *_input) {
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
