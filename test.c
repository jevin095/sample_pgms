#include<stdio.h>

void main()
{
    int T, N, K, tmp, a[10];

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

        printf("Enter k !\n");
        scanf("%d", &K);
        for(int j=0;j<N;j++)
        {
            for(int k=0;k<N-j-1;k++)
            {
                if(a[k+1]<a[k])
                {
                    tmp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=tmp;
                }
            }
        }
        for(int j=0;j<N;j++)
        {
            printf("%d ,",a[j]);
        }
        printf("\n%d ",a[K-1]);
    }

}
