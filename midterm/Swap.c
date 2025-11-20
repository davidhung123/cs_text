#include <stdio.h>

int func(int* i, int* j) {
    int t;
    t = *j;
    *j = *i;
    *i =  t;
}

int main()
{
    int n = 1, m = 2;
    func(&n, &m);
    
    printf("n=%d, m=%d", n, m);

    return 0;
}
