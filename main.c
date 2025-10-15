#include <stdio.h>
#include <stdlib.h>

void square(int a)
{
  a = a*a;
}

int main(void)
{
  int a = 2;
  square(a);
  printf("a = %i\n",a);
  
  system("PAUSE");	
  return 0;
}
/*
int square(int a)
{
  return (a*a);
}

int main(void)
{
  int a = 2;
  a = square(a);
  printf("a = %i\n",a);
  
  system("PAUSE");	
  return 0;
}
*/
