#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main() {
    while (1) {
        led1 = !led1; // Toggle LED1 state
        wait(2.0); // Wait for 2 seconds
        
        led2 = !led2; // Toggle LED2 state
        wait(3.0); // Wait for 3 seconds
        led2 = !led2; // Toggle LED2 state again to achieve a total interval of 5 seconds
        wait(2.0); // Wait for another 2 seconds to complete 5 seconds interval
    }
}
