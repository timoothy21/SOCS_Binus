#include<stdio.h>
#define ull unsigned long long

int search(ull left, ull right,ull angka) {
    if(left <= right){
        ull mid = left + (right- left) / 2;
        ull solution = mid * (mid + 1) * (2 * mid +1) / 6;
        if (solution == angka){
            return mid;
        }
        if (solution > angka){
            return search(left, mid - 1, angka);
        }
        return search(mid + 1, right, angka);
    }
    return right+1;
}

int main() {
    int tc;
    scanf("%d", &tc);
    for(int i = 1 ; i <= tc; i++){
        ull angka;
        scanf("%llu", &angka);
        ull result = search(1,1442251,angka);
        printf("Case #%d: %llu\n", i, result);
    }
    return 0;
}