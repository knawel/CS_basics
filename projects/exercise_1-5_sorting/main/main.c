#include <stdio.h>
#include <sensor.h>
#include <sorting.h>
#define WDEV_RND_REG 0x3FF75144
#define RANDOM_RAW() (*((volatile uint32_t *)WDEV_RND_REG) % 1024)
#define RANDOM_PRINTABLE() (32 + (*((volatile uint32_t *)WDEV_RND_REG) % 95))
#define NUM_SENSORS 10


void app_main(void)
{
    SensorReading sensor_array[NUM_SENSORS];

    for (int i = 0; i < NUM_SENSORS; i++) {
        sensor_array[i].name = RANDOM_PRINTABLE();
        sensor_array[i].raw = RANDOM_RAW();
        calibrate_readings(&sensor_array[i]);
        print_reading(&sensor_array[i]);
    }
    printf("\nSorted Sensor Readings:\n");
    printf("-----------------------\n");
    printf("\n");    
    sel_sort(sensor_array, NUM_SENSORS);
    for (int i = 0; i < NUM_SENSORS; i++) {
        print_reading(&sensor_array[i]);
    }
}