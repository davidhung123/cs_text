#include <stdio.h>

int main()
{
    unsigned int i = 200;
    unsigned int j = 220;
    unsigned int k = 0;
    
    k = (j - i) / 2;
    k = k + i;
    
    printf("%d+%d=%d\n", i, j, k);

    return 0;
}
