#include <stdio.h>

int main (){
    int tc, a;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &a);
        for(int j = 0; j < a; j++){
            for(int k = 0; k < a; k++){
                if(j == k){
                    printf("*");
                } else if (a-k == j + 1){
                    printf("*");
                } else if (j == 0 || k == 0){
                    printf("*");
                } else if (j == a - 1 || k == a - 1){
                    printf("*");
                } else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    
    return 0;
}