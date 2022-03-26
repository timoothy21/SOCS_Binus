#include <stdio.h>
#include <string.h>

struct Mahasiswa{
    char id[11];
    char nama[100];
};

int search(char target[], int tc, Mahasiswa mhs[]){
    int hasil = -1;
    for(int i = 0; i < tc; i++){
        if(strcmp(target, mhs[i].id) == 0){
            hasil = i;
            return hasil;
        }
    }
    return hasil;
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    int tc, tc1;
    char target[11];
    fscanf(fp, "%d\n", &tc);
    Mahasiswa mhs[tc];
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%s %[^\n]\n", mhs[i].id, mhs[i].nama);
    }
    fscanf(fp, "%d\n", &tc1);
    for(int i = 0; i < tc1; i++){
        fscanf(fp, "%s\n", &target);
        int result = search(target, tc, mhs);
        if(result != -1){
            printf("Case #%d: %s\n", i+1, mhs[result].nama);
        } else {
            printf("Case #%d: N/A\n", i+1);
        }
    }

    return 0;
}