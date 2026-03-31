#include <stdio.h>
#include <sensor.h>
#define WDEV_RND_REG 0x3FF75144
#define RANDOM_RAW() (*((volatile uint32_t *)WDEV_RND_REG) % 1024)

void app_main(void)
{
    SensorReading s1 = {
        .name = 'A',
        .raw = RANDOM_RAW(),
        .calibrated = 0
    };

    SensorReading s2 = {
        .name = 'B',
        .raw = RANDOM_RAW(),
        .calibrated = 0
    };

    SensorReading s3 = {
        .name = 'C',
        .raw = RANDOM_RAW(),
        .calibrated = 0
    };

    calibrate_readings(&s1);
    calibrate_readings(&s2);
    calibrate_readings(&s3);

    printf("Memory positions\n");
    print_memory_positions(&s1);
    print_memory_positions(&s2);
    print_memory_positions(&s3);

    printf("Sensor readings\n");
    print_reading(&s1);
    print_reading(&s2);
    print_reading(&s3);

}