
/*
Section D: Pointers to Structures
D2. Modifying Employee Salary
*/

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;
    struct Employee *p;

    p = &e;

    printf("Enter employee ID: ");
    scanf("%d", &p->id);

    printf("Enter employee name: ");
    scanf("%49s", p->name);

    printf("Enter employee salary: ");
    scanf("%f", &p->salary);

    printf("\nEmployee Details:\n");

    printf("ID = %d\n", p->id);
    printf("Name = %s\n", p->name);
    printf("Old Salary = %.2f\n", p->salary);

    printf("Enter new salary: ");
    scanf("%f", &p->salary);

    printf("\nUpdated Employee Details:\n");

    printf("ID = %d\n", p->id);
    printf("Name = %s\n", p->name);
    printf("New Salary = %.2f\n", p->salary);

    return 0;
}
