#include <stdio.h>

#include <stdio.h>

int fibo (int a, int b, int c){
    if(c == 0){
        return a;
    } else if (c == 1){
        return b;
    }
    return fibo(a, b, c-1) - fibo(a, b, c-2);
}


int main (){
    int angka1, angka2, angka3;
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d %d %d",&angka3, &angka1, &angka2);
        printf("Case #%d: %d\n", i+1, fibo(angka1, angka2, angka3));
    }
    return 0;
}