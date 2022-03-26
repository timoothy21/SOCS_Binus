#include <stdio.h>

int main (){
    int tc, tc1, bibi, lili;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        int arr[tc1];
        for(int j = 0; j < tc1; j++){
            scanf("%d", &arr[j]);
        }
        scanf("%d %d", &bibi, &lili);
        if(arr[bibi-1] > arr[lili-1]){
            printf("Case #%d : Bibi\n", i+1);
        } else if (arr[lili-1] > arr[bibi-1]){
            printf("Case #%d : Lili\n", i+1);
        } else if (arr[lili-1] == arr[bibi-1]){
            printf("Case #%d : Draw\n", i+1);
        }
    }

    return 0;
}