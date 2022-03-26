#include <stdio.h>

int main() {
    int tc, tc1;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        int luas = 0;
        int keliling = 0;
        int cube = 0;
        fscanf(fp, "%d\n", &tc1);
        int banyakCube[tc1];
        for(int j = 0; j < tc1; j++){
            fscanf(fp, "%d", &banyakCube[j]);
            cube += banyakCube[j];
        }
        luas = 4 * cube;
        for(int j = 0; j < tc1; j++){
            keliling += (8*banyakCube[j] - (4*(banyakCube[j]-1)));
            // keliling += (4+banyakCube[i]*4);
                if(j != tc1-1){
                    if(banyakCube[j] > banyakCube[j+1]){
                        keliling -= 4*banyakCube[j+1];
                    } else {
                        keliling -= 4*banyakCube[j];
                    }
                }
        }
        printf("Case #%d: %d %d\n", i+1, keliling, luas);
    }

    return 0;
}