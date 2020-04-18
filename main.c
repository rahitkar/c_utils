#include "split.h"
#include "join.h"

int main(void)
{
  char text[] = "This is really cool";

  String_details *splitted_string = split(text, " ");
  printf("Splitted string : ");
  print_string(splitted_string->new_string_address, splitted_string->length);

  printf("joined string: '%s'\n", join("This is really cool", " and nice"));
  return 0;
}