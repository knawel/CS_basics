#include <stdio.h>

int main(void){
    int x = 10;
    int *p = &x;


    printf("x value: %d\n", x);
    printf("x address: %p\n", (void*)&x);


    printf("p value (address): %p\n", (void*)p);
    printf("value via pointer: %d\n", *p);

    // modify via pointer
    *p = 42;

    printf("x after modification: %d\n", x);

    return 0;
}