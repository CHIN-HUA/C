#include<stdio.h>

int main()
{
	int num1;
	int num2;
	printf("��J�ƭ�,�ڷ|�i�D�A\n");
	printf("�ƭ�:");
	scanf("%d%d", &num1, &num2);
	
	if(num1 == num2)
	{
		printf("%d ���� %d\n", num1, num2);
	}
	
	if(num1 != num2)
	{
		printf("%d ������ %d\n", num1, num2);
	}
	
	if(num1 > num2)
	{
		printf("%d �j�� %d\n", num1, num2);
	}
	
	if(num1 < num2)
	{
		printf("%d �p�� %d\n", num1, num2);
	}
	
	if(num1 >= num2)
	{
		printf("%d �j��or���� %d\n", num1, num2);
	}
	
	if(num1 <= num2)
	{
		printf("%d �p��or���� %d\n", num1, num2);
	}
	return 0;
 } 
