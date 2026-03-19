#include <stdio.h>
#include "helper.h"

void app_main(void)
{
    int x = 102;
    int y = 103;
    int z = 105;
    printf("---- x ----");
    print_int(&x);
    printf("---- y ----");
    print_int(&y);
    printf("------- z  -----");
    print_int(&z);
    printf("---- changes ----");
    change_by_pnt(&x, 2001);
    print_int(&x);

}