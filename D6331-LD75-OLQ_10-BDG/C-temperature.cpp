#include <stdio.h>
#include <string.h>

struct Data{
    char kota[1005];
    double temp;
    char suhu;
    double temptemp;
};

int hitung = 0;

void sortName(Data arr[]){
    struct Data temp;
    for(int i = 0; i < hitung; i++){
        for(int j = 0; j < hitung-1-i; j++){
            if(strcmp(arr[j].kota, arr[j+1].kota) > 0){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sortTemp(Data arr[]){
    struct Data temp1;
    for(int i = 0; i < hitung; i++){
        for(int j = 0; j < hitung-1-i; j++){
            if(arr[j].temptemp > arr[j+1].temptemp){
                temp1 = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp1;
            }
        }
    }
}


int main (){
    struct Data bumi[101];
    FILE *fp = fopen("testdata.txt", "r");
    while(fscanf(fp, "%[^#]#%lf#%c\n", bumi[hitung].kota, &bumi[hitung].temp, &bumi[hitung].suhu) != EOF){
        if(bumi[hitung].suhu == 'F'){
            bumi[hitung].temptemp = (bumi[hitung].temp - 32) * 5/9;
        } else if(bumi[hitung].suhu == 'C'){
            bumi[hitung].temptemp = bumi[hitung].temp;
        }
        hitung++;
    }
    fclose(fp);
    sortName(bumi);
    sortTemp(bumi);
    for(int i = 0; i < hitung; i++){
        printf("%s is %.2lf%c\n", bumi[i].kota, bumi[i].temp, bumi[i].suhu);
    }
    return 0;
}