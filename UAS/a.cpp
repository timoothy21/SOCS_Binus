#include <stdio.h>

int fpb(int a, int b){
    int c;
    if(b == 0){
        return a;
    } else if(b !=0) {
        return fpb(b, a%b);
    }
    return fpb(a,b);
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int hasil = fpb(a,b);
    printf("%d\n", hasil);
    return 0;
}