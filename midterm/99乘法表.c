#include <stdio.h>

int main()
{
    int y = 1;
    
    for(int i = 1, x = 1; i <= 81; i++, x++) {
        printf("%d*%d=%d\t", y, x, y*x);
        
        if(x == 9){
            printf("\n");
            y++;
            x = 0;
        }
    }

    return 0;
}
