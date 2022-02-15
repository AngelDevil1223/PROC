#ifndef OPTIONS_H
#define OPTIONS_H


#include <stdlib.h>

extern const int ON;
extern const int OFF;
extern const int ERROR;

/* Structure containing all of the flags for the program.
 * 0 if false.
 * 1 if true.
 * p is true if any value other than 0.
 */
struct options{
  int p;
  int s;
  int U;
  int S;
  int v;
  int c;
};

//initializes all options to defaults defined by program instructions
int initOptions(int argc, char *argv[], struct options *flags);

//sets option flags according to command line arguments
int argsCheck(int argc, char *argv[], struct options *flags);


#endif
