#include <stdio.h>

int main (){
    int a, b;
    long long int hasil = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++)
    {
        hasil +=a;
        a++;
    }
    printf("%lld\n", hasil);
    return 0;
}
