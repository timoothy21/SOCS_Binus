#include <stdio.h>

int main (){
    int tc;
    scanf("%d", &tc);
    int harga, diskon, max;
    for(int i = 0; i < tc; i++){
        scanf("%d %d %d", &harga, &diskon, &max);
        int totalDiskon = harga * diskon/100;
        if(totalDiskon >= max){
            printf("Case #%d: %d\n", i+1, max);
        } else if (totalDiskon < max){
            printf("Case #%d: %d\n", i+1, totalDiskon);
        }
    }
    return 0;
}