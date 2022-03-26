#include <stdio.h>
#include <string.h>

int main() {
    int tc, tc1;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &tc);
    char name[105];
    int alphabet[27];
    int move[27];

    for(int i = 0 ; i < tc; i++){
        for(int j = 0; j < 27; j++){
            alphabet[j] = 0;
            move[j] = 0;
        }

        fscanf(fp, "%s\n", &name);
        fscanf(fp, "%d\n", &tc1);
        char awal;
        char akhir;

        for(int k = 0; k < tc1; k++){
            fscanf(fp, "%c %c\n", &awal, &akhir);
            if(move[awal-65]){
                continue;
            }
            for(int j = 0; j < strlen(name); j++){
                if(name[j] == awal){
                    name[j] = akhir;
                }
            }
            move[awal-65] = 1;
        }

        for(int j = 0; j < strlen(name); j++){
            alphabet[name[j] - 65]++;
        }
     
        // printf("%s\n", name);
        for(int j = 0; j < 27; j++){
            if(alphabet[j] > 0){
                printf("%c %d\n", j+65, alphabet[j]);
            }
        }
    }

    
    return 0;
}