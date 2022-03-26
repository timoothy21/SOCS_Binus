#include <stdio.h>
#include <math.h>

int main (){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        long long int count = 0;
        long long int angka;
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
        printf("Case #%d: %lld\n", i+1, count);
    }

    return 0;
}