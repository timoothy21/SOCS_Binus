#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x, int hasil) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            if(hasil > mid){
                hasil = mid;
                return binarySearch(arr, l, mid-1, x, hasil);
            }
        }
        if (arr[mid] > x){
            return binarySearch(arr, l, mid - 1, x, hasil);
        } else {
            return binarySearch(arr, mid + 1, r, x, hasil);
        }
    }
    return hasil;
}

int main() {
    int tc, tc1, target;
    scanf("%d %d", &tc, &tc1);
    int arr[tc];
    for(int i = 0; i < tc; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < tc1; i++){
        scanf("%d", &target);
        int result = binarySearch(arr, 0, tc-1, target, 1000000);
        if(result == 1000000){
            printf("-1\n");
        } else {
            printf("%d\n", result+1);
        }
    }
    return 0;
}