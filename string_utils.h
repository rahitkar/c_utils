#include <stdio.h>
#ifndef __STIRNG_UTILS_H_
#define __STIRNG_UTILS_H_

typedef struct
{
  char **new_string_address;
  int length;
} String_details;

void print_string (char **, int);

unsigned long count_length (char*);

#endif