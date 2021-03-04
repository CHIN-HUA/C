#include<stdio.h>

int main()
{
	int num1;
	int num2;
	printf("块计,и穦禗\n");
	printf("计:");
	scanf("%d%d", &num1, &num2);
	
	if(num1 == num2)
	{
		printf("%d 单 %d\n", num1, num2);
	}
	
	if(num1 != num2)
	{
		printf("%d ぃ单 %d\n", num1, num2);
	}
	
	if(num1 > num2)
	{
		printf("%d  %d\n", num1, num2);
	}
	
	if(num1 < num2)
	{
		printf("%d  %d\n", num1, num2);
	}
	
	if(num1 >= num2)
	{
		printf("%d or单 %d\n", num1, num2);
	}
	
	if(num1 <= num2)
	{
		printf("%d or单 %d\n", num1, num2);
	}
	return 0;
 } 
