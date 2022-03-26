#include <stdio.h>

int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        int arr[tc1];
        int count = 1;
        for(int j = 0; j < tc1; j++){
            scanf("%d", &arr[j]);
        }
        int k;
        for(int j = 1; j < tc1; j++){
            for(k = 0; k < j; k++){
                if(arr[j] == arr[k]){
                    break;
                }
            }
            if(j == k){
                count++;
            }
        }
        printf("Case #%d: %d\n", i+1, count);
    }
    return 0;
}