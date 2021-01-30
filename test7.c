#include<stdio.h>

void main()
{
    int T, N, k, tmp, a[100000];

    printf("Enter no of test cases!\n");
    scanf("%d", &T);
    printf("Number of test cases is = %d\n", T);
    
    for(int j=0;j< T;j++)
    {
        k = 0;
        printf("Enter the Number\n");
        scanf("%d", &N);

        for(int i=0;i<64;i++)
        {
            if(N&1)
                k = k+1;
            N = N >> 1;
        }
        printf("%d\n", k);
    }
}
