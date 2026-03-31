// main.c
#include "calculator.h"
#include "esp_log.h"

#include <stdlib.h>

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


void app_main(void) {
    Calculator c = { .result = 42, .operand = 0, .op = '+' };
    ESP_LOGI(TAG, "sizeof(Calculator) = %d", sizeof(Calculator));
    ESP_LOGI(TAG, "sizeof(Padded)     = %d", sizeof(Padded));

    // Print member offsets
    #include <stddef.h>
    ESP_LOGI(TAG, "offsetof result  = %d", offsetof(Calculator, result));
    ESP_LOGI(TAG, "offsetof operand = %d", offsetof(Calculator, operand));
    ESP_LOGI(TAG, "offsetof op      = %d", offsetof(Calculator, op));


}