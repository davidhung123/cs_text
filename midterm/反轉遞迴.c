#include <stdio.h>

int reverse (int num) {
    static int rev =0;
    
    if (num == 0) {
        int res = rev;
        rev = 0;
        return res;
    }
    else {
        rev = rev * 10 + num % 10;
        
        return reverse (num / 10);
    }
}

int main()
{
    int num = 54321;
    printf ("Reverse of %d = %d", num, reverse(num));

    return 0;
}
