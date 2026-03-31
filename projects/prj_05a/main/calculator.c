// calculator.c
#include "calculator.h"
#include "esp_log.h"


#include "calculator.h"
#include <stdlib.h>
#include "esp_log.h"

static const char *TAG = "CALC";

// 3. Actual function bodies live here
Calculator *calc_create(int initial) {
    Calculator *c = malloc(sizeof(Calculator));
    if (c == NULL) {
        ESP_LOGE(TAG, "malloc failed");
        return NULL;
    }
    c->result  = initial;
    c->operand = 0;
    c->op      = '+';
    return c;
}

void calc_destroy(Calculator *c) {
    free(c);
}


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
    ESP_LOGI(TAG, "result=%d  op=%c  operand=%d",
             c->result, c->op, c->operand);
}