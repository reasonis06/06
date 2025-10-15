#include <stdio.h>
#include <stdlib.h>

void func()
{
  int i;
  for(i=0; i<10; i++)
      printf("*");
}

int main(int argc, char *argv[])
{
  int i;
  
  func();
  func();
  func();
  
  system("PAUSE");	
  return 0;
}
