#include <stdio.h>

// 1 susah 0 gampang

int main() {
    int tc, temp;
    scanf("%d", &tc);
    int hasil = 0;
    for(int i = 0; i < tc; i++){
        scanf("%d", &temp);
        if(temp != 0){
            hasil++;
        }
    }
    if(hasil == 0){
        printf("easy\n");
    } else {
        printf("not easy\n");
    }
    return 0;
}