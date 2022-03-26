#include <stdio.h>

int main (){
    int tc;
    int a, b;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d %d", &a, &b);
        if(a>=b){
            printf("Case #%d: Go-Jo\n", i+1);
        } else if (b >= a){
            printf("Case #%d: Bi-Pay\n", i+1);
        }
    }

    return 0;
}