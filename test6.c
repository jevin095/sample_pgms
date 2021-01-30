#include<stdio.h>

void main()
{
    int T, N,S, K, tmp, a[1000000], tmpsum;

    printf("Enter no of test cases!\n");
    scanf("%d", &T);
    printf("Number of test cases is = %d\n", T);

    for(int i=0; i<T ; i++)
    {
        printf("Enter no of Elements in the arr!\n");
        scanf("%d", &N);
        scanf("%d", &S);
        for(int j=0; j<N; j++)
        {
            scanf("%d",&a[j]);
        }
        for(int j=0;j<N;j++)
        {
            for(int k=j;k<N;k++)
            {
               tmpsum =+ a[k];
               if (tmpsum == S)
               {
                    printf("%d %d",j,k);
               }
            }
            tmpsum = 0;
        }
    }
}
