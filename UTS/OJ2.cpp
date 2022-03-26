#include <stdio.h>

int main (){
    int angka;
    int sum = 0;
    int count = 0;
    do{
        scanf("%d", &angka);
        sum += angka;
        if(angka > 0){
            count++;
        } 
    }while(angka != 0);
    if(sum == 0){
        printf("Error\n");
    } else {
        printf("%.1lf\n", (double)sum/count);
    }
    return 0;
}
