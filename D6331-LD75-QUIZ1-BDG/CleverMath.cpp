#include <stdio.h>
#include <math.h>

int main (){
    int tc;
    int angka1, angka2;
    int temp1, temp2, tempHasil;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        long long int hasil = 0;
        int index = 0;
        scanf("%d %d", &angka1, &angka2);
        while (angka1 != 0 || angka2 != 0){
            tempHasil = (angka1 % 10) + (angka2 % 10);
            angka1 /= 10;
            angka2 /= 10;
            if(tempHasil < 10){
                hasil += tempHasil*pow(10, index);
            } else {
                hasil += (tempHasil % 10)*pow(10, index);
            }
            index++;
        }
        printf("Case #%d: %lld\n", i+1, hasil);
    }

    return 0;
}