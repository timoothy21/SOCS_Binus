#include <stdio.h>

int main (){
    int tc, tc1, index, value;
    scanf("%d", &tc);
    int arr[tc];
    for(int i = 0; i < tc; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &tc1);
    for(int i = 0; i < tc1; i++){
        scanf("%d %d", &index, &value);
        arr[index-1] = value;
        printf("Case #%d:", i+1);
        for(int j = 0; j < tc; j++){
            printf(" %d", arr[j]);
        }
        printf("\n");
    }
    return 0;
}