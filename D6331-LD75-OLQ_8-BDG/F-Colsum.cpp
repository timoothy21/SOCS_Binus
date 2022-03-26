#include <stdio.h>

int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        int arr[tc1][tc1];
        for(int j = 0; j < tc1; j++){
            for(int k = 0; k < tc1; k++){
                scanf("%d", &arr[j][k]);
            }
        }
        printf("Case #%d:", i+1);
        for(int j = 0; j < tc1; j++){
            int sum = 0;
            for(int k = 0; k < tc1; k++){
                sum += arr[k][j];
            }
            printf(" %d", sum);
        }
        printf("\n");
    }
    return 0;
}