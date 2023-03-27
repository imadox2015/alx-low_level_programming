#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

#define PASSWORD_LENGTH 100

int main(void)
{
  char password[PASSWORD_LENGTH + 1]; /* +1 for null terminator */
  int i, sum, diff, rand_num;

  srand(time(NULL));

  /* Generate random ASCII characters for password */
  sum = 0;
  for (i = 0; i < PASSWORD_LENGTH; i++)
    {
      rand_num = rand() % 78 + 48;
      password[i] = rand_num;
      sum += rand_num;
    }

  /* Calculate difference to get desired checksum */
  diff = 2772 - sum;

  /* Add difference to last character of password to get desired checksum */
  password[PASSWORD_LENGTH - 2] = diff / 10 + '0';
  password[PASSWORD_LENGTH - 1] = diff % 10 + '0';

  printf("%s", password);

  return (0);
}
