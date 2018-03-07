#include <stdio.h>
#include <stdlib.h>

/**
 指针
 */

int main()
{
    int a = 10;
    int * p;
    
    p = &a;
    printf("%d",*p);
    
    getchar();getchar();
    return 0;
}
