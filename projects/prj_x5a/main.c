// main.c
#include "calculator.h"

void main(void) {
    Calculator c = {
        .result  = 10,
        .operand = 5,
        .op      = '+'
    };

    calc_print(&c);   // result=10
    calc_apply(&c);
    calc_print(&c);   // result=15
}