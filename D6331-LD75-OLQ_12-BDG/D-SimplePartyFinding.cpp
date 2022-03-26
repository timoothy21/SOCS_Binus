#include <stdio.h>

void sort(int arr[], int tc1) {
    for(int i = 0; i < tc1; i++){
        for(int j = 0; j < tc1-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int search(int arr[], int tc1, int target) {
    int hasil = -1;
    for(int i = 0; i < tc1; i++){
        if(target == arr[i]){
            hasil = i;
            return hasil;
        }
    }
    return hasil;
}

int main() {
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        int arr[tc1];
        int target;
        for(int j = 0; j < tc1; j++){
            scanf("%d", &arr[j]);
        }
        scanf("%d", &target);
        sort(arr, tc1);
        int result = search(arr, tc1, target);
        if(result == tc1-1) {
            printf("CASE #%d: %d %d\n", i+1, arr[result-1], arr[result]);
        } else if(result == -1) {
            printf("CASE #%d: -1 -1\n", i+1);
        } else {
            printf("CASE #%d: %d %d\n", i+1, arr[result], arr[result+1]);
        }
    }
    return 0;
}