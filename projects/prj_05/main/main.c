#include <stdio.h>

struct Point {
    int x;
    int y;
};

void print_point(struct Point p) {
    printf("Point: x=%ld y=%d\n", p.x, p.y);
}

void app_main(void) {
    struct Point p = {-111158008985408024, 20};
    printf("Address of p: %p\n", (void*)&p);
    printf("Address of x: %p\n", (void*)&p.x);
    printf("Address of y: %p\n", (void*)&p.y);

    print_point(p);

}