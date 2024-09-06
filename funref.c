#include <stdio.h>
void modifyValue(int *a)
{

    *a = 15;
    printf("Address of pointer a = %d\n", &a); // 642256
}

int testFunction()
{
    int x = 10;
    printf("call by reference:\n");
    printf("testFunction: Before modify function x = %d\n", x);

    printf("Address of x %d\n", &x);
    modifyValue(&x);
    printf("testFunction: After modify function x =%d\n", x);

    return 0;
}