#include <stdio.h>
void main()
{
    int n, i;
    int factorial = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %d", n, factorial);
}
