#include <stdio.h>
#include <string.h>

int main() {
    int tc, geser;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &tc);
    char kata[1001];
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%d\n", &geser);
        fscanf(fp, "%[^\n]\n", &kata);
        for(int i = 0; i < strlen(kata); i++){
            if(kata[i] == '0') kata[i] = 'O';
            else if(kata[i] == '1') kata[i] = 'I';
            else if(kata[i] == '3') kata[i] = 'E';
            else if(kata[i] == '4') kata[i] = 'A';
            else if(kata[i] == '5') kata[i] = 'S';
            else if(kata[i] == '6') kata[i] = 'G';
            else if(kata[i] == '7') kata[i] = 'T';
            else if(kata[i] == '8') kata[i] = 'B';
            if(kata[i] != ' ') {
                kata[i] -= geser;
                if(kata[i] < 'A'){
                    kata[i] = 'A' - kata[i];
                    kata[i] = 91 - kata[i];
                }
            }
        }
        printf("Case #%d: %s\n", i+1, kata);
    }
    fclose(fp);

    return 0;
}