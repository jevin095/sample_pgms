#include<stdio.h>

void main()
{
    int T, N, d, tmp, a[100000];

    printf("Enter no of test cases!\n");
    scanf("%d", &T);
    printf("Number of test cases is = %d\n", T);

    for(int i=0; i<T ; i++)
    {
        printf("Enter no of Elements in the arr!\n");
        scanf("%d", &N);
        for(int j=0; j<N; j++)
        {
            scanf("%d",&a[j]);
        }
        printf("Enter no of elem to be rotated\n");
        scanf("%d",&d);
        for (int k=d;k<d+N;k++)
        {
            tmp=k%N;
            printf("%d \n", a[tmp]);
        }
    }
}
