#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* clone_array(int* np, int n) {
    int* new_ptr = (int*) calloc (n, sizeof(int));
    
    for(int i = 0; i < n; i++) {
        new_ptr[i] = np[i];
    }
    return new_ptr;
}

void print_array(int* p, int n) {
    for(int j = 0; j < n; j++) {
        printf("%d, ", p[j]);
        
    }
    printf("\n");
}

int main()
{
    int n = 5;
    int np[5] = {0, 1, 2, 3, 4};
    int* p = clone_array(np, n);
    print_array(p, n);
    
    free(p);
    return 0;
}
