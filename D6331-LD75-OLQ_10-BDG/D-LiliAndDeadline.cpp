#include <stdio.h>
#include <string.h>

struct Pelajaran{
    char matkul[15];
    int waktu;
};


int tc;

void sortName(Pelajaran arr[]){
    struct Pelajaran temp;
    for(int i = 0; i < tc; i++){
        for(int j = 0; j < tc-1-i; j++){
            if(strcmp(arr[j].matkul, arr[j+1].matkul) > 0){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sortTime(Pelajaran arr[]){
    struct Pelajaran temp;
    for(int i = 0; i < tc; i++){
        for(int j = 0; j < tc-1-i; j++){
            if(arr[j].waktu > arr[j+1].waktu){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main (){
    scanf("%d", &tc);
    struct Pelajaran t[tc];
    for(int i = 0; i < tc; i++){
        scanf("%s %d", t[i].matkul, &t[i].waktu);
    }
    sortName(t);
    sortTime(t);
    for(int i = 0; i < tc; i++){
        printf("%s\n", t[i].matkul);
    }
    return 0;
}