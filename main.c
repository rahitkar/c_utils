#include "split.h"

int main(void)
{
  char text[] = "This is really cool";

  String_details *splitted_string = split(text, " ");

  printf("Splitted string :\n");
  print_string(splitted_string->new_string_address, splitted_string->length);

  return 0;
}