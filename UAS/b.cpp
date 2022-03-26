#include <stdio.h>
#include <math.h>

int main() {
    int temp, angka;
    int binary = 0;
    scanf("%d", &angka);
    for(int i = 0; angka > 0; i++){
        temp = angka % 2;
        angka /= 2;
        binary += temp * pow(10, i);
    }
    printf("%016d\n", binary);
    return 0;
}