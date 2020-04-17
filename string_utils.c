#include "string_utils.h"

void print_string (char **string, int string_length) {
  for (int i = 0; i < string_length; i++)
  {
    printf("'%s' ", string[i]);
  }
  printf("\n");
}
