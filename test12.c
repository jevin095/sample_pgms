#include <stdio.h>

typedef struct temp {

    int a[2];
} Tmp;

Tmp arr[1][3] = {{ {1,2} ,{3,4} }};

void main() 
{
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<3;j++)
        {

            for(int k=0;k<2;k++)
            {
                 printf("%d   ",arr[i][j].a[k]);
            }
        }
        printf("\n");
    }
}
