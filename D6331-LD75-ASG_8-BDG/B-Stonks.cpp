#include <stdio.h>

int main (){
    long long int tc, temp;
    long long int sum = 0;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%lld", &temp);
        if(temp > 0){
            sum += temp;
        }
    }
    printf("%lld\n", sum);

    return 0;
}