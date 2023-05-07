#include <mbed.h>

//Iniatilizing inputs
InterruptIn down(p12);
InterruptIn left(p13);
InterruptIn center(p14);
InterruptIn up(p15);
InterruptIn right(p16);

void down_handler() {
    printf("Joystick down\n");
}

void left_handler() {
    printf("Joystick left\n");
}

void center_handler() {
    printf("Joystick center\n");
}

void up_handler() {
    printf("Joystick up\n");
}

void right_handler() {
    printf("Joystick right\n");
}

int main() {
    down.fall(&down_handler);
    left.fall(&left_handler);
    center.fall(&center_handler);
    up.fall(&up_handler);
    right.fall(&right_handler);

    while (1) {
        // do other stuff here
    }
    return 0;
}