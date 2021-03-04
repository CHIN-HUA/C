#include <stdio.h>
#include <stdlib.h>



int main()
{
    int Nsize;
    int NXN[100][100] = {0};
    scanf("%d", &Nsize);
    if(Nsize % 2 == 0)
    {
        printf("It is not an odd number.\n");
        exit(0);
    }

    int x = Nsize-1;
    int y = Nsize/2;
    int num = 2;
    int Num = Nsize * Nsize;
    NXN[x][y] = 1;




    while(num <= Num)
    {
        x = x + 1;
        y = y + 1;

        if(x == Nsize && y == Nsize)
        {
            x-=2;
            y-=1;
        }
        else
        {
            if(x == Nsize)
            {
                x = 0;
            }
            if(y == Nsize)
            {
                y = 0;
            }
        }
        if(NXN[x][y] != 0)
        {
            x-=2;
            y-=1;
        }

        NXN[x][y] = num;
        num+=1;
    }



    for(int i = 0 ; i < Nsize ; i++)
    {
        for(int j = 0 ; j < Nsize ; j++)
        {
            printf("%5d ", NXN[i][j]);
        }
        printf("\n");
    }

    return 0;
}
