#include <stdio.h>
#include <string.h>

int main (){
    int tc;
    scanf("%d", &tc);
    char kata[100001];
    for(int i = 0; i < tc; i++){
        scanf("%s", &kata);
        int length = strlen(kata);
        int huruf[27] = {0};
        int count = 0;
        for(int j = 0; j < length; j++){
            int tempKata = kata[j] -= 96;
            huruf[tempKata]++;
        }
        for(int j = 0; j <= 26; j++){
            if(huruf[j] > 0){
                count++;
            }
        }
        if(count % 2 == 0){
            printf("Case #%d: Breakable\n", i+1);
        } else {
            printf("Case #%d: Unbreakable\n", i+1);
        }
    }
    return 0;
}