#include <stdio.h>
int main()
{
    int i=0;
    while (i<10)
    {
        printf("i=%d\n",i);
        i++;
        if (i==5) continue;
        printf("-----------\n");
    }
    return 0;
}