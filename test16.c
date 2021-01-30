#include<stdio.h>

typedef struct ABC{

   int a;
   int b;
   int c;
}ABC;

typedef struct BAC {
    ABC num[16];
}BAC;


int main()
{

    ABC dea = { 1, 2, 3};
    BAC arr[]= {
        {
            {
                {1,2,3},
            }
        },
        {
            { 
                {4,5,6},
                {9,8,7},
            }
            //{0,11,12},
            //{10,22,31},
        },
    };


    return 0;
}
