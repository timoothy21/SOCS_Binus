#include <stdio.h>

int main (){
    int tc;
    scanf("%d", &tc);
    for(int x = 0; x < tc; x++){
        int counter[200001] = {0};
        int tc1;
        scanf("%d", &tc1);
        int arr[tc1];
        for(int i = 0; i < tc1; i++){
            scanf("%d", &arr[i]);
            counter[arr[i]]++;
        }

        int max = arr[0];
        for(int i = 0; i < tc1; i++){
            if(arr[i] > max){
                max=arr[i];
            }
        }

        int frekuensi = counter[0];
        for (int i = 1; i <= max; i++)
        {
            if(counter[i] > frekuensi){
                frekuensi = counter[i];
            }
        }

        printf("Case #%d: %d\n", x + 1, frekuensi);
        int status = 1;
        for(int i = 0; i <= max; i++){
            if( status == 1 && counter[i] == frekuensi){
                printf("%d", i);
                status = 0;
            } else if (counter[i] == frekuensi){
                printf(" %d", i);
            }  
        }
        printf("\n");
    }

    return 0;
}