#include <stdio.h>

typedef struct {
    int result;
    int last_op;
} calculator_t;

typedef struct {
    int a;
    int b;
    int c;
} test_t;

void add(calculator_t *calc, int a, int b) {
    calc->result = a + b;
    calc->last_op = 1;
}

int main(void) {
    test_t t = {0};
    void modify_value(test_t t);
    void modify_pointer(test_t *t);
    printf("%p\n", &t);
    printf("%d\n", t.a);

    return 0;
}