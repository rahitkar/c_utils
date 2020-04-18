#include "string_utils.h"

void print_string (char **string, int string_length) {
  for (int i = 0; i < string_length; i++)
  {
    printf("'%s' ", string[i]);
  }
  printf("\n");
}

unsigned long count_length (char *text) {
  int count;
  for ( count = 0; text[count] != '\0'; count++);
  return count;
}
