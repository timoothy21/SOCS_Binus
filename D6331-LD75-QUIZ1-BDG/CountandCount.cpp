#include <stdio.h>

int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++){
        scanf("%d", &tc1);
        printf("Case #%d:\n", i);
        for(int j = 1; j<=tc1; j++){
            if(j % 15 == 0){
                printf("%d Lili\n", j);
            } else if (j % 3 == 0 || j % 5 == 0){
                printf("%d Jojo\n", j);
            } else {
                printf("%d Lili\n", j);
            }
        }
    }

    return 0;
}