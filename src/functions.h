#ifndef FUNCTIONS_H
#define FUNCTIONS_H

char * UserInput();
// Checks the string to make sure it is a valid input, assumes the input is invaild by default.
// 
// The string should contain at least 1 plus sign to be vaild and must occur between a set of 8 ASCII characters,
// like this 00000000+00000000.
int stringcheck(char *_input);
void printing(char *_input);
// Count how many plus signs are in the string
// then depending on the position of the plus sign
// change it to a space or a newline, every other plus sign
// should be turned into a newline and the rest should be spaces.
char * converter(char *_input);

#endif