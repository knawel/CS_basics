#include "helper.h"
#include <stdio.h>

void print_int(int *a) {

    printf("value: %d\n", *a);
    printf("pointer value (address): %p\n", (void*)a);
}

void change_by_pnt(int *p, int b){
    *p = b;
}

