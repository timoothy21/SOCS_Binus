#include <stdio.h>

int main (){
    int a, b, c;
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a+b > c && b+c > a && a+c > b){
            printf("Case #%d: Yes\n", i+1);
        }
        else{
            printf("Case #%d: No\n", i+1);
        }
    }
    return 0;
}