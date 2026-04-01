// sensor.c
#include "sensor.h"
#include "esp_log.h"

void calibrate_readings(SensorReading *s) {
    s->calibrated = 100.0f * (s->raw /1023.0f) + (s->raw  * s->raw ) * 0.00003f;

}

void print_reading(SensorReading *s) {
    ESP_LOGI("SENSOR", "Sensor %c: Raw = %d, Calibrated = %.2f", s->name, s->raw, s->calibrated);
}