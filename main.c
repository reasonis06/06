#include <stdio.h>
#include <stdlib.h>

int get_integer()
{
	int num;
	scanf("%d", &num);
	return num;
}

int factorial(int n)
{
 	int res = 1;
 	int i;
    for(i=1; i<=n; i++)
		res = res * i;
		
	return res;
}

int combination(int n, int r)
{
	//factorial computation
 	return factorial(n)/factorial(n-r)/factorial(r);
}

int main(void)
{
	//variable declare
	int n,r;
	int result;
  
	//input data
	printf("input n: ");
	n = get_integer();
	
	printf("input r: ");
	r = get_integer();
  
	//compute combination();
	result = combination(n,r);
  
	//print result
	printf("combination result is %i\n", result);
  
	system("PAUSE");	
	return 0;
}
