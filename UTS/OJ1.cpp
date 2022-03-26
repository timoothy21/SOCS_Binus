#include <stdio.h>

int main (){
    char nada;
    int angka;
    scanf("%c%d", &nada, &angka);
    if(nada == 'C' && angka == 4){
        printf("Nada C4 adalah 261.63 Hz\n");
    } else if (nada == 'D' && angka == 4){
        printf("Nada D4 adalah 293.66 Hz\n");
    } else if (nada == 'E' && angka == 4){
        printf("Nada E4 adalah 329.63 Hz\n");
    } else if (nada == 'F' && angka == 4){
        printf("Nada F4 adalah 349.23 Hz\n");
    } else if (nada == 'G' && angka == 4){
        printf("Nada G4 adalah 392.00 Hz\n");
    } else if (nada == 'A' && angka == 4){
        printf("Nada A4 adalah 440.00 Hz\n");
    } else if (nada == 'B' && angka == 4){
        printf("Nada B4 adalah 493.88 Hz\n");
    } 
    return 0;
}