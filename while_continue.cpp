#include <stdio.h>
int main()
{
    printf("test : continue in while, if (i==5) continue;\n");
    printf("add a new line under baidu explorer\n");
    printf("if new i=6,continue.  edit on the mobile.\n");//u")
    int i=0;
    while (i<10)
    {
        printf("i=%d\n",i);
        i++;
        if (i==6) continue;//55 
        //／/+
        //if (i＝6) continue;
        printf("-----------new i=%d\n",i);
    }
    return 0;
}