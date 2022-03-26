#include <stdio.h>
#include <string.h>

struct Data {
   char name[50];
   int num;
};

void sortName(Data mhs[], int tc) {
    Data temp;

    for(int i = 0; i < tc; i++){
        for(int j = 0; j < tc-i-1; j++){
            if(strcmp(mhs[j].name, mhs[j+1].name) > 0){
                temp = mhs[j];
                mhs[j] = mhs[j+1];
                mhs[j+1] = temp;
            }
        }
    }
}

void sortNumber(Data mhs[], int tc) {
    Data temp;
    for(int i = 0; i < tc; i++){
        for(int j = 0; j < tc-i-1; j++){
            if(mhs[j].num > mhs[j+1].num){
                temp = mhs[j];
                mhs[j] = mhs[j+1];
                mhs[j+1] = temp;
            }
        }
    }
}

int main() {
    int tc, tc1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1); getchar();
        Data mhs[tc1];
        for(int j = 0; j < tc1; j++){
            scanf("%[^#]#%d", mhs[j].name, &mhs[j].num); getchar();
        }
        sortName(mhs, tc1);
        sortNumber(mhs, tc1);
        printf("Case #%d:\n", i+1);
        for(int j = 0; j < tc1; j++){
            printf("%s - %d\n", mhs[j].name, mhs[j].num);
        }
    }

    return 0;
}