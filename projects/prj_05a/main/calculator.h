#ifndef CALCULATOR_H
#define CALCULATOR_H

// 1. The type definition — must be here so ALL .c files know the shape
typedef struct {
    int result;
    int operand;
    char op;
} Calculator;

// 2. Function declarations — promises to the compiler that these exist
Calculator *calc_create(int initial);
void        calc_destroy(Calculator *c);
void        calc_apply(Calculator *c);
void        calc_print(const Calculator *c);

#endif