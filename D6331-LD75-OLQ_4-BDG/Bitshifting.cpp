#include <stdio.h>

int main (){
    int tc, a, b;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", (a/b)<<b);
    }
    return 0;
}
