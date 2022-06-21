#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

void main ()
{
//   printf("hello");
  fflush(stdout);
  fork();
  fork();
  printf("hi");
}