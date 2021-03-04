#include <stdio.h>
#define F(x) (x*x)

int main()
{
	int i = 4;
	int j = 4;
	i = F((j+2));
	printf("i: %d\n", i);	
	return 0;
} 
