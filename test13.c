
#include <stdio.h>

void main()
{
    int *p;
    int a[] = {3,4,5};
    p = a;
    printf("%d\n",*p);
    printf("%p\n", p);
}
