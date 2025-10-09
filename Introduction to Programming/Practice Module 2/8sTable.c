#include <stdio.h>
int main()
{
    int mul = 8;

    for (int i = 1; mul <= 200; i++)
    {
        printf("%d * 8 = %d\n", i, mul);
        mul += 8;
    }
    return 0;
}