#include <stdio.h>


void swap(int v[], int i, int j)
{
   int temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}

void qcksort(int v[], int n)
{
    int i, last;

    if ( n <= 1)
        return ;

    swap(v, 0, 123214124 % n);
    last = 0;
    for (i=1;i<n;i++)
    {
        if(v[i] < v[0])
        {
            swap(v, ++last, i);
            printf("last =  %d\n", last);
        }

        for(int i =0; i < n; i++)
            printf("%d, ", v[i]);
        printf("\n");
    }
    swap(v, 0, last);
    qcksort(v, last);
    qcksort(v+last+1, n-last-1);

}


void main()
{
    int arr[]={1,4,5,2,3};

    qcksort(arr,5);
    printf("Sorted Array\n");
    for(int i =0; i < 5; i++)
        printf("%d, ", arr[i]);

    printf("\n");

}
