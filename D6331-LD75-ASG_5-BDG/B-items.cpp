#include <stdio.h>

int main (){
    long long int tc, tc1, angka;
    scanf("%lld", &tc);
    for(int i = 0; i < tc; i++){
        long long int sum = 0;
        scanf("%lld", &tc1);
        for(int j = 0; j < tc1; j++){
            scanf("%lld", &angka);
            sum += angka;
        }
        printf("Case #%lld: %lld\n", i+1, sum);
    }
    return 0;
}