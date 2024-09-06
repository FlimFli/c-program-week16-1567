#include "funcall.c"
int testPointer(){
    int x = 10;
    int *ptr;//Pinter declaration

    printf("Value of varible x =%d\n", x); //Normal varible declaration and intialization
    printf("Address of varible x =%d\n", &x);// Pointer declaration
    ptr = &x; // Pointer intialization value with address of x varible
    printf("Address of pointer x =%d\n", &ptr); // address of pointer ptr
    printf("Value of pointer x =%d\n", *ptr); //10
    *ptr = 20;                               // Change value of x
    printf("Value of pointer x =%d\n", ptr); //20 

    return 0;
}