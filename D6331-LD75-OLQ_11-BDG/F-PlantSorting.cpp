#include <stdio.h>
#include <string.h>

struct Data{
    int ID;
    char name[50];
};
int banyak;

void sortName(Data arr[]){
    struct Data temp;
    for(int i = 0; i < banyak; i++){
        for(int j = 0; j < banyak-1-i; j++){
            if(strcmp(arr[j].name, arr[j+1].name) > 0){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main (){
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &banyak);
    Data t[banyak];
    for(int i = 0; i < banyak; i++){
        fscanf(fp, "%d#%[^\n]", &t[i].ID, t[i].name);
    }
    // for(int x = 0; x < banyak; x++){
    //     printf("%d %s\n", t[x].ID, t[x].name);
    // }
    sortName(t);
    for(int x = 0; x < banyak; x++){
        printf("%d %s\n", t[x].ID, t[x].name);
    }
    fclose(fp);
    return 0;
}