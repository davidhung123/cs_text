#include <stdio.h>

int main()
{
   FILE* fp = fopen("hello.txt", "w+");
    
    fprintf (fp, "hello, b1429052");
    fclose(fp);

    return 0;
}
