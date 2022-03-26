#include <stdio.h>
#include <string.h>

struct Product{
    char product[51];
    int item;
};

int search(char target[], int totalbarang, Product barang[]) {
    int hasil = -1;
    for(int i = 0; i < totalbarang; i++){
        if(strcmp(target, barang[i].product) == 0){
            hasil = i;
            return hasil;
        }
    }
    return hasil;
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    int tc,tc1;
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%d\n", &tc1);
        Product tempBarang;
        Product barang[tc1];
        int totalBarang = 0;
        char doing[100];
        for(int j = 0; j < tc1; j++){
            fscanf(fp, "%[^#]#%[^#]#%d\n", doing, tempBarang.product, &tempBarang.item);
            int result = search(tempBarang.product, totalBarang, barang);
            if(result == -1){ //item not found
                strcpy(barang[totalBarang].product, tempBarang.product);
                if(strcmp(doing, "sell") == 0){
                    barang[totalBarang].item = -tempBarang.item;
                } else if(strcmp(doing, "buy") == 0){
                    barang[totalBarang].item = tempBarang.item;
                }
                totalBarang++;
            } else if(result != -1){ // item found
                if(strcmp(doing, "sell") == 0){
                    barang[result].item -= tempBarang.item;
                } else if(strcmp(doing, "buy") == 0){
                    barang[result].item += tempBarang.item;
                }
            }
        }

        printf("Case #%d:\n", i+1);

        int flag = 0;
        for(int j = 0; j < totalBarang; j++){
            if(barang[j].item < 0){
                printf("stock is not enough for product %s\n", barang[j].product);
                flag = 1;
            }
        }
        if(!flag){
            for(int j = 0; j < totalBarang; j++){
                printf("%s - %d\n", barang[j].product, barang[j].item);
            }
        }


    }
    return 0;
}