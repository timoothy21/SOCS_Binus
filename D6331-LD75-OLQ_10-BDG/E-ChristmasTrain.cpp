#include <stdio.h>

int tc1;
int count = 0;

void sort(int arr[]){
    for(int i = 0; i < tc1; i++){
        for(int j = 0; j < tc1-1-i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
    }
}

int main (){
    int tc;
    int waktu;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        count = 0;
        scanf("%d %d", &tc1, &waktu);
        int arr[tc1];
        for(int x = 0; x < tc1; x++){
            scanf("%d", &arr[x]);
        }
        sort(arr);
        printf("Case #%d: %d\n", i+1, count*waktu);
    }
    return 0;
}