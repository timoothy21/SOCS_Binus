#include <stdio.h>

int main (){
    int length, tc, index;
    scanf("%d %d", &length, &tc);
    char kata[length];
    scanf("%s", &kata);
    for(int i = 0; i < tc; i++){
        scanf("%d", &index);
        if(kata[index] >= 65 && kata[index] <= 90){
            kata[index] = kata[index]+32;
        } else {
            kata[index] = kata[index]-32;
        }
    }
    printf("%s\n", kata);
    return 0;
}