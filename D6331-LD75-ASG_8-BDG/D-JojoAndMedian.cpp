#include <stdio.h>

struct product{
    char id[9];
    char item[16];
    long long int harga;
};

void sort(struct product list[], int n);

int main (){
    int tc; 
    long long int median;
    scanf("%d", &tc);
    struct product barang[tc];
    for(int i = 0; i < tc; i++){
        scanf("%s", &barang[i].id); getchar();
        scanf("%[^\n]", &barang[i].item); getchar();
        scanf("%lld", &barang[i].harga);
    }

    sort(barang, tc);

    if(tc % 2 == 0){
        int temp = tc/2;
        median = (barang[temp-1].harga + barang[temp].harga)/2;
    } else {
        int temp = tc/2;
        median = barang[temp].harga;
    }
    
    for(int i = 0; i < tc; i++){
        if(barang[i].harga >= median){
            printf("%s %s\n", barang[i].id, barang[i].item);
        }
    }
    return 0;
}

void sort(struct product list[], int n){
    struct product temp;
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < n - 1 - i; j++){
            if(list[j].harga > list[j+1].harga){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}