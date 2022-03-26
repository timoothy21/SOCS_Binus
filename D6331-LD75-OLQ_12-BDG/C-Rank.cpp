#include <stdio.h>
#include <string.h>

struct Data{
    char name[11];
    int nilai;
};

void sortName(Data t[], int tc1) {
    Data temp;
    for(int i = 0; i < tc1; i++){
        for(int j = 0; j < tc1-i-1; j++){
            if(strcmp(t[j].name, t[j+1].name) > 0){
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }
}

void sortNilai(Data t[], int tc1) {
    Data temp;
    for(int i = 0; i < tc1; i++){
        for(int j = 0; j < tc1-1-i; j++){
            if(t[j].nilai < t[j+1].nilai){
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }
}

int search(Data t[], int tc1, char target[]) {
    int hasil = -1;
    for(int i = 0; i < tc1; i++){
        if(strcmp(target, t[i].name) == 0){
            hasil = i;
            return hasil;
        }
    }
    return hasil;
}

int main() {
    int tc, tc1;
    char target[11];
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1);
        getchar();
        Data t[tc1];
        for(int j = 0; j < tc1; j++){
            scanf("%[^#]#%d\n", &t[j].name, &t[j].nilai);
        }
        sortName(t, tc1);
        sortNilai(t, tc1);
        scanf("%s", target); getchar();
        int result = search(t, tc1, target);
        printf("Case #%d: %d\n", i+1, result+1);
    }
    return 0;
}