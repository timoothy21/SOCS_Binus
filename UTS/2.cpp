#include <stdio.h>
#include <math.h>

int main (){
    int tinggi, alas;
    scanf("%d %d", &tinggi, &alas);
    int luas = (tinggi*alas)/2;
    double miring = sqrt((tinggi*tinggi)+(alas*alas));
    printf("Luas segitiga : %d\n", luas);
    printf("Panjang sisi miring : %.2lf\n", miring);
    printf("Rasio antara luas dan panjang segitiga : ");
    if(luas > miring){
        printf("%.2lf : 1\n", luas/miring);
    } else if (alas > tinggi){
        printf("1 : %.2lf\n", miring/luas);
    }
    return 0;
}