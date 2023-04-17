#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("$ ");
  fflush(stdout);
  char *command = NULL;
  size_t bufsize = 0;
  getline(&command, &bufsize, stdin);
  printf("%s", command);
  free(command);
  return (0);
}
