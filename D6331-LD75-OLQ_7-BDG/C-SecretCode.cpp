#include <stdio.h>
#include <string.h>

int main (){
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++){
        char kata[1001];
        scanf("%s", &kata);
        int length = strlen(kata);
        printf("Case %d: ", i);
        for(int j = length-1; j >= 0; j--){
            printf("%d", kata[j] % 2);
        }
        printf("\n");
    }
    return 0;
}