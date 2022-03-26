#include <stdio.h>

int main (){
    int a;
    double b, bunga;
    double persen = 1;
    scanf("%d %lf", &a, &b);
    bunga = 1 + b/100;
    for(int i = 0; i < 3; i++){
        persen *= bunga;
    }
    printf("%.2lf\n", a*persen);
    return 0;
}
