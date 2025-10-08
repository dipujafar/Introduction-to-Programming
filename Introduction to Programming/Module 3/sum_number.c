#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of %d natural numbers is %d", n, sum);
    return 0;
}