#include <stdio.h>

int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        int arr[tc1];
        for(int j = 0; j < tc1; j++){
            scanf("%d", &arr[j]);
        }
        printf("Case #%d:", i+1);
        while(tc1--){
            printf(" %d", arr[tc1]);
        }
        printf("\n");
    }
    return 0;
}