#include <stdio.h>

int fibo (int a, int b, int c){
    if(c == 0){
        return a;
    } else if (c == 1){
        return b;
    }
    return fibo(a, b, c-1) + fibo(a, b, c-2);
}


int main (){
    int angka1, angka2, angka3;
    scanf("%d %d", &angka1, &angka2);
    scanf("%d", &angka3);
    printf("%d\n", fibo(angka1, angka2, angka3));
    return 0;
}