#include<stdio.h>
int testPointer3()
{
    int var = 10; //Actual variable
    int *intptr = &var; //* = Dereference operator
    int **ptrptr = &intptr; //& = Address of operator

    printf("Var: %d\n Address of var: %d\n", var, &var); // 10,xxx
    printf("intptr: %d\n Address of inptr: %d\n", intptr, &intptr); // var xx,xx
    printf("var: %d\n Value at input: %d\n", var, *intptr);
    printf("ptrtoptr: %d\n Address ptrtoptr: %d\n", ptrptr, ptrptr);
}