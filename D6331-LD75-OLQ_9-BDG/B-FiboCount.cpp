#include <stdio.h>

int counter = 0;

int fibo(int a){
    counter++;
    if(a <= 1) return a;
    return fibo(a-1)+fibo(a-2);
}

int main (){
    int tc, angka;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &angka);
        fibo(angka);
        printf("Case #%d: %d\n", i+1, counter);
        counter = 0;
    }
    return 0;
}