#include <stdio.h>

int main (){
    int tc;
    char kata[101];
    for(int i = 0; i < 3; i++){
        scanf("%d %s", &tc, &kata);
        printf("%c%c\n", kata[tc-1], kata[0]);
    }
    return 0;
}