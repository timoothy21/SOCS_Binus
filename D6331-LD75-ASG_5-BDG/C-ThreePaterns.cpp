#include <stdio.h>

int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            printf("#");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if(i % b >= 1){
                printf(".");
            }else if (i % b == 0){
                printf("#");
            }
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if(j % b >= 1){
                printf(".");
            }else if (j % b == 0){
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;

}
