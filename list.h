#ifndef LISTS_H   
#define LISTS_H

static const int BUFFER;

//responsible for generating list of processes, then returns as an array
int* generateProcessList();

//helper method for testing ownership of each file
int testOwnership(char* processName);

#endif
