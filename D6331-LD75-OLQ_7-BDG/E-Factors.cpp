#include <stdio.h>
#include <math.h>

int main (){
    int tc;
    long long int angka;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++){
        long long int count = 0;
        scanf("%lld", &angka);
        for(long long int j = 1; j <= sqrt(angka); j++){
            if(angka%j == 0){
                if(j*j != angka){
                    count+= 2;
                } else{
                    count++;
                }
            }
        }
        printf("Case #%d: %lld\n", i, count);
    }
    return 0;
}
