#include <stdio.h>
#include <stdlib.h>

void print_adress_stack(int x){
    int v = x;
    printf("stack address: %p\n",(void *)&v);
}

void print_adress_heap(int* p){
    printf("heap address: %p\n", (void *)p);
}


void app_main(void)
{
    int i =0;
    while (i<100000){
        int *pv = malloc(sizeof(int));
        *pv = 1020;
        print_adress_heap(pv);
        print_adress_stack(*pv);
        free(pv);
        i++;
        printf("---\n");

    }

}