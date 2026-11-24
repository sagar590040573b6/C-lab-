
/* B1. Two One-bit Flags
   Create two one-bit fields using bit-fields.
   Read and display their values.
*/

#include <stdio.h>

struct Flags
{
    unsigned int isOn : 1;
    unsigned int isReady : 1;
};

int main()
{
    struct Flags f;
    int on, ready;

    printf("Enter isOn (0 or 1): ");
    scanf("%d", &on);

    printf("Enter isReady (0 or 1): ");
    scanf("%d", &ready);

    if ((on != 0 && on != 1) ||
        (ready != 0 && ready != 1))
    {
        printf("Invalid input! Enter only 0 or 1.");
        return 0;
    }

    f.isOn = on;
    f.isReady = ready;

    printf("\nisOn = %u", f.isOn);
    printf("\nisReady = %u", f.isReady);

    return 0;
}
