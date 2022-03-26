#include <stdio.h>
//undone

int main (){
    int tc;
    scanf("%d", &tc);
    int angka[tc];
    int minodd = 100001;
    long long int sum = 0;
    for(int i = 0; i < tc; i++){
        scanf("%d", &angka[i]);
        
    }
    for(int i = 0; i < tc; i++){
        sum += angka[i];
        if(angka[i] % 2 == 1 && angka[i] < minodd){
            minodd = angka[i];
        }
    }
    if(sum % 2 == 0){
        printf("%lld\n", sum);
    } else {
        printf("%lld\n", sum-minodd);
    }
    return 0;
}