#include <stdio.h>
#define ull unsigned long long

int binarySearch(ull l, ull r, ull angka) {
    if (l <= r) {
        ull mid = l + (r - l) / 2;
        ull solution = mid * (mid + 1) * (2 * mid +1) / 6;

        if (solution == angka)
            return mid;
            
        if (solution > angka)
            return binarySearch(l, mid - 1, angka);

        return binarySearch(mid + 1, r, angka);
    }
    return r+1;
}

int main() {
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++) {
        int angka;
        scanf("%d", &angka);
        ull result = binarySearch(1, 999999999999999999, angka);
        printf("%d\n", result);
    }
    return 0;
}