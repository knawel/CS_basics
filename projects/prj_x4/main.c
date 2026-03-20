#include <stdio.h>
#include <stdlib.h>

void print_adress_stack(int x){
    int v = x;
    printf("stack address: %p\n",(void *)&v);
}

void print_adress_heap(int* p){
    printf("heap address: %p\n", (void *)p);
}

int main(void) {


    int i = 0;
    while (i<10){
        int *pv = malloc(sizeof(int));
        int *tm = malloc(sizeof(int));
        *pv = 1020;
        *tm = *pv + 12;
        print_adress_heap(pv);
        print_adress_heap(tm);
        print_adress_stack(*pv);
        i++;
        // free(pv);
        printf("---\n");

    }



    return 0;
}