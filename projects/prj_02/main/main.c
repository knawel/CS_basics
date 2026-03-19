#include <stdio.h>
#include "helper.h"

void app_main(void)
{
    int result = add(2, 3);
    printf("Result: %d\n", result);

    int a = 10;
    int b = 5;

    printf("Add: %d\n", add(a, b));
    printf("Subtract: %d\n", subtract(a, b));

}