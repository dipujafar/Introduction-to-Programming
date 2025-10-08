#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("cox's Bazar jabo\n");
        if (tk >= 10000)
        {
            printf("Saint Martin Jabo\n");
        }
        else
        {
            printf("Cox's Bazar theke cole asbo\n");
        }
    }
    else
    {
        printf("Kothao Jabo na\n");
    }
}