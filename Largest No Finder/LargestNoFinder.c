#include <stdio.h>

int main()
{
    // Defining three variables for the three integers
    int a, b, c;

    // Input message for a
    printf("Enter First Integer: ");
    scanf("%d", &a);

    // Input message for b
    printf("Enter Second Integer: ");
    scanf("%d", &b);

    // Input message for c
    printf("Enter Third Integer: ");
    scanf("%d", &c);

    // Conditional satements
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest number \n", a); // a is greater than both b and c
        }
        else
        {
            printf("%d is the largest number \n", c); // a is greater than b and c is greater than a therefore c is greatest
        }
    }
    else if (b > c) // b is greater than both a and c
    {
        printf("%d is the largeest number \n", b);
    }
    else
    {
        printf("%d is the largest number \n", c); // c is greater than both a and b
    }

    // adding cmd commad to pause the exe file from closing as soon as the program finishes
    system("pause");
    return 0;
}
