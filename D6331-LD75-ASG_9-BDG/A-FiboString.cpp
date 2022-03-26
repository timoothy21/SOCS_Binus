#include <stdio.h>
#include <string.h>

void fibo(int index, char a, char b){
    if(index == 0){
        printf("%c", a);
    } else if (index == 1){
        printf("%c", b);
    } else {
        fibo(index-1, a, b);
        fibo(index-2, a, b);
    }
}

int main (){
    int tc;
    scanf("%d", &tc);
    int angka;
    char kata1;
    char kata2;
    for(int i = 0; i < tc; i++){
        scanf("%d %c %c", &angka, &kata1, &kata2);
        printf("Case #%d: ", i+1);
        fibo(angka, kata1, kata2);
        printf("\n");
    }
    return 0;
}