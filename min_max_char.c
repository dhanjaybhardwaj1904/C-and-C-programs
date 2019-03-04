#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char min_char(char *str)
{
  char min = str[0];
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] < min)
      min = str[i];
    }
  return (min);
}

char max_char(char *str)
{
  char max = str[0];
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] > max)
      max = str[i];
    }
  return (max);
}

int main()
{
    int i;
    char str[100];
    char min;
    char max;

    printf("Enter the string with or without spaces: \n");
    scanf("%[^\n]s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] > max)
            max = str[i];
    }
    printf("Minimum char in string = %c\n", min_char(str));
    printf("Maximum char in string = %c", max_char(str));
    return (0);
}