#include "split.h"

String_details *split(char *text, char *symbal)
{
  int counter = 0;
  char **text_array_ptr = calloc(counter + 1, sizeof(int *));
  text_array_ptr[counter] = &text[0];

  for (int i = 0; text[i] != '\0'; i++)
  {
    if (text[i] == symbal[0])
    {
      text[i] = '\0';
      counter++;
      text_array_ptr = realloc(text_array_ptr, (counter + 1) * sizeof(char *));
      text_array_ptr[counter] = &text[++i];
    }
  }

  String_details *new_string = calloc(1, sizeof(String_details));
  new_string->new_string_address = text_array_ptr;
  new_string->length = counter + 1;
  return new_string;
}

