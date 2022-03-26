#include <stdio.h>
#include <string.h>

int main (){
    int tc;
    scanf("%d", &tc);
    char kata[1001];
    for(int i = 0; i < tc; i++){
        scanf("%s", &kata);
        int length = strlen(kata);
        printf("Case #%d: ", i+1);
        for(int j = length-1; j >= 0; j--){
            if(kata[j] >= 'a' && kata[j] <= 'z'){
                kata[j] -= 32;
            } else if(kata[j] >='A' && kata[j] <= 'Z'){
                kata[j] += 32;
            }
            printf("%c", kata[j]);
        }
        printf("\n");
    }

    return 0;
}