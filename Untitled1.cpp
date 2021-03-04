#include<stdio.h>
#include<stdlib.h>

	int main()
	{
		char a[100];

		int b;
		int i;
		scanf("%d", &b);

		for( i = 0; i < b; i++)
        {
            scanf("%c", &a[i]);
        }
        for( i = 0; i < b; i++)
        {
            printf("%c", a[i]);
        }

	}
