#include<stdio.h>

void main()
{
    int *p;
    int a = 10,b;
    p = &a;
    b = sizeof(p);
    printf("%d\n",*p);
    printf("size = %d\n",b);
    printf("0x%x\n",(int)p);
}

