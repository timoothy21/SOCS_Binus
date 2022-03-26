#include <stdio.h>

int main (){
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        int count = 0;
        long long int test[tc1];
        long long int standard[tc1];
        for(int j = 0; j < tc1; j++){
            scanf("%lld", &test[j]);
        }
        for(int j = 0; j < tc1; j++){
            scanf("%lld", &standard[j]);
        }
        for(int j = 0; j < tc1; j++){
            if(test[j] < standard[j]){
                count++;
            }
        }
        printf("Case #%d: %d\n", i+1, count);
    }

    return 0;
}