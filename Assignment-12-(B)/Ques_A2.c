
/* A2. Student Result Status
   Use enum Result to classify student marks.
   DISTINCTION = average >= 75
   PASS = average >= 40
   FAIL = otherwise.
*/

#include <stdio.h>

enum Result
{
    FAIL,
    PASS,
    DISTINCTION
};

enum Result getResult(float average)
{
    if (average >= 75)
        return DISTINCTION;

    else if (average >= 40)
        return PASS;

    else
        return FAIL;
}

int main()
{
    float average;
    enum Result result;

    printf("Enter average marks: ");
    scanf("%f", &average);

    if (average < 0 || average > 100)
    {
        printf("Invalid marks!");
        return 0;
    }

    result = getResult(average);

    printf("\nResult: ");

    switch (result)
    {
        case FAIL:
            printf("FAIL");
            break;

        case PASS:
            printf("PASS");
            break;

        case DISTINCTION:
            printf("DISTINCTION");
            break;
    }

    printf("\nNumeric Value: %d", result);

    return 0;
}
