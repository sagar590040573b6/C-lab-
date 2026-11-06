
// Question A3: Nested Structure


#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Employee
{
    char name[30];
    int id;
    float salary;
    struct Date joiningDate;
};

int main()
{
    struct Employee e[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter employee name: ");
        scanf("%29s", e[i].name);

        printf("Enter employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);

        printf("Enter joining date (DD MM YYYY): ");
        scanf("%d %d %d",
              &e[i].joiningDate.day,
              &e[i].joiningDate.month,
              &e[i].joiningDate.year);
    }

    printf("\n--- Employee Details ---\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nName: %s\n", e[i].name);
        printf("ID: %d\n", e[i].id);
        printf("Salary: %.2f\n", e[i].salary);

        printf("Joining Date: %d-%d-%d\n",
               e[i].joiningDate.day,
               e[i].joiningDate.month,
               e[i].joiningDate.year);
    }

    return 0;
}