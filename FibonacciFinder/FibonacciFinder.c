#include <stdio.h>

int main()
{
    // Title
    printf("Febonacci Sequence Finder\n\n");

    // Defining variables
    int i, n, t1 = 0, t2 = 1, nextTerm;

    // Input Prompt
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Output
    printf("\nFibonacci Series: ");

    // Loop
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    // adding cmd commad to pause the exe file from closing as soon as the program finishes
    printf("\n\n");
    system("pause");
    return 0;
}