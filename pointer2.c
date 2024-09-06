#include<stdio.h>
int testPointer2(){
    int x = 10;
    float y = 1.3f;
    char z = 'p';

    //pointer declaration and intialization
    int *ptr_x = &x;
    float *ptr_y = &y;
    char *ptr_z = &z;

    //printing the value
    printf("Value of x = %d\n", *ptr_x); //10
    printf("Value of y = %.2f\n", *ptr_y); //1.3
    printf("Value of z = %d\n", *ptr_z); //P

    //Printing the size of pointer varible
    printf("size of integer pointer: %lu\n", sizeof(ptr_x));
    printf("size of float pointer: %lu\n", sizeof(ptr_y));
    printf("size of char pointer %lu\n", sizeof(ptr_z));

    return 0;
}