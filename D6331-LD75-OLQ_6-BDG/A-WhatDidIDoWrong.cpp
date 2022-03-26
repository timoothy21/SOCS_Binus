#include <stdio.h>

int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        int angka1[tc1];
        int angka2[tc1];
        for(int j = 0; j < tc1; j++){
            scanf("%d", &angka1[j]);
        }
        for(int j = 0; j < tc1; j++){
            scanf("%d", &angka2[j]);
        }
        printf("Case #%d:", i+1);
        for(int j = 0; j < tc1; j++){
            printf(" %d", angka1[j]-angka2[j]);
        }
        printf("\n");        
    }

    return 0;
}