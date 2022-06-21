#include <stdio.h>
#include <unistd.h>

void main() 
{
  
//     if (fork()||fork())
//     {
//       printf("hi");  
//     }
  int p;
  p=fork();
  
  if (p>0)
  {
    fork();
    printf("hi");
  }
  printf("bye");
}