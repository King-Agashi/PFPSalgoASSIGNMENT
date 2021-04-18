#include <stdio.h>

int main()
{
    // Title
    printf("To Verify whether the givin no. is prime or not.\n\n");

    // Defining variables
    int n, i, flag = 0;

    // Input Prompt
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // For loop to check divisibility
    for (i = 2; i <= n / 2; ++i)
    {
        // condition for non-prime
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // Output cases based on divisibility test
    if (n == 1)
    {
        printf("1 is neither prime nor composite.\n");
    }
    else
    {
        if (flag == 0)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    // adding cmd commad to pause the exe file from closing as soon as the program finishes
    system("pause");
    return 0;
}