#include <stdio.h>
#include <string.h>

struct Mahasiswa{
    char ID[11];
    char name[21];
};

void sort(Mahasiswa mhs[], int tc) {
    Mahasiswa temp;
    for(int i = 0; i < tc; i++){
        for(int j = 0; j < tc-1-i; j++){
            if(strcmp(mhs[j].ID, mhs[j+1].ID) > 0){
                temp = mhs[j];
                mhs[j] = mhs[j+1];
                mhs[j+1] = temp;
            }
        }
    }
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    int tc;
    fscanf(fp, "%d\n", &tc);
    Mahasiswa mhs[tc];
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%s %s", mhs[i].ID, mhs[i].name);
    }
    sort(mhs, tc);
    for(int i = 0; i < tc; i++){
        printf("%s %s\n", mhs[i].ID, mhs[i].name);
    }
    fclose(fp);
    return 0;
}