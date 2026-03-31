// calculator.c
#include "calculator.h"
#include <stddef.h>
#include <stdio.h>

static const char *TAG = "CALC";

void calc_apply(Calculator *c) {
    switch (c->op) {
        case '+': c->result += c->operand; break;
        case '-': c->result -= c->operand; break;
        case '*': c->result *= c->operand; break;
        case '/':
            if (c->operand != 0)
                c->result /= c->operand;
            break;
    }
}

void calc_print(const Calculator *c) {
    printf("result=%d  op=%c  operand=%d\n", c->result, c->op, c->operand);
}