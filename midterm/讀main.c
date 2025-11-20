#include <stdio.h>
#include <string.h>

int main() {
    
    FILE* fp = fopen("main.c", "r");
    
    char buf[4096];
    int line = 0;
    int ans = -1;
    
    while(fgets(buf, sizeof(buf), fp)){
        line++;
        
        if(strstr(buf, "int main()")){
            ans = line;
            break;
        }
    }
    
    printf("%02d int main() {", ans);
    
    fclose(fp);

    return 0;
}
