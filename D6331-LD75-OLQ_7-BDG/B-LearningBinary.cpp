#include <stdio.h>

int main (){
    int tc;
    long long int angka, index;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        long long int binary[33] = {0};
        scanf("%lld %lld", &angka, &index);
        for(int k = 0; angka > 0; k++){
            binary[k] = angka%2;
            angka = angka/2;
        }
        printf("%lld", binary[index]);
        printf("\n");
    }
    return 0;
}