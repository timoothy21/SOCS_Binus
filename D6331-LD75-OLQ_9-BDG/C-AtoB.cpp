#include <stdio.h>

int rumus (int a, int b){
    if(a == b){
        return a;
    } else if (a == 1){
        return a;
    }
    if(a%2 == 0){
        a /= 2;
    } else {
        a = a*3 + 1;
    }
    return rumus(a, b);
};

int main (){
    int tc;
    int angka, target;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d %d", &angka, &target);
        int temp = rumus(angka, target);
        if(temp == target){
            printf("Case #%d: YES\n", i+1);
        } else {
            printf("Case #%d: NO\n", i+1);
        }
    }
    return 0;
}