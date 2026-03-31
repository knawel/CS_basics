#ifndef SENSOR_H
#define SENSOR_H

typedef struct {
    char name;
    int raw;
    float calibrated;
    
} SensorReading;

void calibrate_readings(SensorReading *s);
void print_reading(SensorReading *s);
void print_memory_positions(SensorReading *s);

#endif