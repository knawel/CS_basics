// calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

typedef struct {
    int result;
    int operand;
    char op;        // '+', '-', '*', '/'
} Calculator;

void calc_apply(Calculator *c);
void calc_print(const Calculator *c);

#endif