#include <stdio.h>
#include <string.h>

int main (){
    int tc;
    scanf("%d", &tc);
    char huruf[1001];
    for(int i = 0; i < tc; i++){
        scanf("%s", &huruf);
        printf("Case %d: ", i+1);
        int length = strlen(huruf);
        for(int j = 0; j < length; j++){
            if(j == 0){
                printf("%d", huruf[j]);
            }else{
                printf("-%d", huruf[j]);
            }
        }
        printf("\n");
    }
    return 0;
}