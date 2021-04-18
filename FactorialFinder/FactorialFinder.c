#include <stdio.h>

int main()
{
    // Title
    printf("Factorial Calculator\n");

    // Defining variables
    int n, i;
    unsigned long long fact = 1;

    // Input prompt
    printf("\nEnter an Integer: ");
    scanf("%d", &n);

    // Conditional Statements
    if (n > 0)
    {
        for (i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
    else if (n = 0)
    {
        printf("Factorial of 0 = 1\n");
    }
    else
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }

    // adding cmd commad to pause the exe file from closing as soon as the program finishes
    system("pause");
    return 0;
}