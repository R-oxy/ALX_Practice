#include <stdio.h>
#include <unistd.h>

int main()
{
  pid_t parent_pid = getppid();
  printf("Parent process ID: %d\n", parent_pid);
  return 0;
}
