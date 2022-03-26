#include <stdio.h>

int main (){
    char huruf;
    scanf("%s", &huruf);
    if(huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o' ){
        printf("Huruf Vokal\n");
    } else if (huruf == 'y'){
        printf("Huruf Konsonan dan Vokal\n");
    } else {
        printf("Huruf Konsonan\n");
    }
    return 0;
}