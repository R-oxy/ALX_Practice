#include <stdio.h>

int main(int argc, char *argv[])
{
  (void)argc;
  int count = 0;
  while (argv[count] != NULL)
  {
    count++;
  }
  printf("%d\n", count);
  return (0);
}
