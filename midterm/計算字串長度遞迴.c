#include <stdio.h>

int my_strlen (char* s) {
    static int count = 0;
    
    if (*s == '\0') {
        int ans = count;
        count = 0;
        return ans;
    }
    else {
        count++;
        return my_strlen(s+1);
    }
}

int main()
{
    char s[] = "IU is a girl!";
    
    printf ("(%s) len = %d\n", s, my_strlen(s));

    return 0;
}
