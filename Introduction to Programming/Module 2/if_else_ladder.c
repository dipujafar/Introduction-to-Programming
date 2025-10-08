#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("burger Khabo\n");
    }
    else if (tk >= 50)
    {
        printf("fuska Khabo\n");
    }
    else if (tk >= 20)
    {
        printf("Ca Khabo");
    }
    else
    {
        printf("kicu Khabo na\n");
    }
}