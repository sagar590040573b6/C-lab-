
/* B2. Packed Device Status
   Create bit-fields for power, mode, error and battery.
   Read and display the device status.
*/

#include <stdio.h>

struct Device
{
    unsigned int power : 1;
    unsigned int mode : 2;
    unsigned int error : 1;
    unsigned int battery : 4;
};

int main()
{
    struct Device d;
    int power, mode, error, battery;

    printf("Enter power (0 or 1): ");
    scanf("%d", &power);

    printf("Enter mode (0-3): ");
    scanf("%d", &mode);

    printf("Enter error (0 or 1): ");
    scanf("%d", &error);

    printf("Enter battery (0-15): ");
    scanf("%d", &battery);

    if ((power < 0 || power > 1) ||
        (mode < 0 || mode > 3) ||
        (error < 0 || error > 1) ||
        (battery < 0 || battery > 15))
    {
        printf("Invalid input!");
        return 0;
    }

    d.power = power;
    d.mode = mode;
    d.error = error;
    d.battery = battery;

    printf("\n--- Device Status ---");
    printf("\nPower: %u", d.power);
    printf("\nMode: %u", d.mode);
    printf("\nError: %u", d.error);
    printf("\nBattery: %u", d.battery);

    return 0;
}

/*
Note:
Bit-fields help save memory.
However, their exact memory layout depends
on the compiler and system.
*/
