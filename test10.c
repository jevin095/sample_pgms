#include<stdio.h>

void main()
{
    int a[4]= {6,7,8,9};
    int temp,n=4;
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]< a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (int i=0;i<n;i++)
        printf("%d, " ,a[i]);

    printf("\n");

}
