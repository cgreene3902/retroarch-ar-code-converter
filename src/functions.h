#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdbool.h>

#define MAXSIZE 10000 // This is likely larger enough, but can be increased if not
#define HELPTEXT "Usage: converter [OPTION]\nDefault behavior is interactive mode\n\t-h\t\t\tprints this help message\n\t-i\t\t\tinteractive mode\n\t-a \"code goes here\"\ttake cheat as arg and convert it\n\t\n"

void ArgTest(int arg_n);

int ArgCheck(int NumOfArgs, char **args);

void UserInput(char *buffer, int size);

// Checks the string to make sure it is a valid input, assumes the input is invaild by default.
// 
// The string should contain at least 1 plus sign to be vaild and must occur between a set of 8 ASCII characters
// like this 00000000+00000000.
// The string can also only have an even number of + signs.
bool StringCheck(char *_input);

// Count how many plus signs are in the string
// then depending on the position of the plus sign
// change it to a space or a newline, every other plus sign
// should be turned into a newline and the rest should be spaces.
void converter(char *_input);

#endif