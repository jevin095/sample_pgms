#include<stdio.h>

void main()
{
    int T, N, K, tmp, a[100000];

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

        for(int j=0;j<N-1;j++)
        {
            if(a[j+1]<a[j])
            {
                printf(" %d ,",a[j+1]);
            }
            else
            {
                printf(" -1 ,");
            }
        }
        printf(" -1 \n");
    }

}
