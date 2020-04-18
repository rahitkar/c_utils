#include "join.h"

char *join(char *text1, char *text2)
{
  unsigned long text1_length = count_length(text1);
  unsigned long text2_length = count_length(text2);

  char *joined_string = calloc(text1_length + text2_length + 1, sizeof(char));

  int j = 0; 
  for (unsigned long  i = 0; i < text1_length + text2_length; i++)
  {
    if (i < text1_length)
    {
      joined_string[i] = text1[i];
    }
    else
    {
      joined_string[i] = text2[j];
      j++;
    }
  }

  return joined_string;
}