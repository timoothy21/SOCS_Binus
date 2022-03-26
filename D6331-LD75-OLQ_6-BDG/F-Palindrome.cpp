#include <stdio.h>
#include <string.h>

int main (){
    int tc;
    scanf("%d", &tc);
    char kata[501];
    for(int i = 0; i < tc; i++){
        scanf("%s", &kata);
        int length = strlen(kata);
        int panjang = length;
        int count = 0;
        for(int j = 0, k = panjang-1; j < length && k >= 0; j++, k--){
            if(kata[j] == kata[k]){
                count++;
            } else if (kata[j] != kata[k]){
                break;
            }
        }
        if(count == length){
            printf("Case #%d: Yay, it's a palindrome\n", i+1);
        } else{
            printf("Case #%d: Nah, it's not a palindrome\n", i+1);
        }
    }
    return 0;
}