#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d", &tc);
    char kata[1001];
    for(int i = 0; i < tc; i++){
        scanf("%s", &kata);
        printf("Case #%d : ", i+1);
        int length = strlen(kata);
        for(int j = length-1 ; j >= 0; j--){
            printf("%c", kata[j]);
        }
        printf("\n");
    }
    return 0;
}