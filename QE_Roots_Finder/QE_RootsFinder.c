#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, D, root1, root2, real, imag;

    printf("For a(x^2) + b(x) + c\n");
    printf("Enter coefficients\n");

    // Input message for a
    printf("a: ");
    scanf("%lf", &a);

    // Input message for b
    printf("b: ");
    scanf("%lf", &b);

    // Input message for c
    printf("c: ");
    scanf("%lf", &c);

    D = b * b - 4 * a * c;

    // If Determinant is positive we will get real roots
    if (D >= 0)
    {
        root1 = ((-b + sqrt(D)) / (2 * a));
        root2 = ((-b - sqrt(D)) / (2 * a));

        printf("\nRoots of the given Quadratic Equation are %.2lf and %.2lf. \n", root1, root2);
        if (D == 0)
        {
            printf("Since the determinant is equal to 0, both roots are equal.\n");
        }
    }

    // If Determinant is negative we will get imaginary roots
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-D) / (2 * a);
        printf("\nRoots of the given Quadratic Equation are %.2lf+%.2lfi and %.2lf-%.2lfi\n", real, imag, real, imag);
    }

    // adding cmd commad to pause the exe file from closing as soon as the program finishes
    system("pause");
    return 0;
}