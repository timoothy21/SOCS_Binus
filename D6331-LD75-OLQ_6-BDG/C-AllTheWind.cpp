#include <stdio.h>

int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        int arr2D[tc1][tc1];
        for(int j = 0; j < tc1; j++){
            for(int k = 0; k < tc1; k++){
                scanf("%d", &arr2D[j][k]);
            }
        }
        printf("Case #%d:", i+1);
        for(int j = 0; j < tc1; j++){
            long long int hasil = 0;
            for(int k = 0; k < tc1; k++){
                hasil += arr2D[k][j];
            }
            printf(" %lld", hasil);
        }
        printf("\n");
    }
    return 0;
}