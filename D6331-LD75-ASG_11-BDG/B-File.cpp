#include <stdio.h>
#include <string.h>

struct Word{
    char sw[51]; //short word
    char ow[51]; // original word
};

int searchWord(char target[], int tc, Word kata[]) {
    int hasil = -1;
    for(int i = 0; i < tc; i++){
        if(strcmp(target, kata[i].sw) == 0){
            hasil = i;
            return hasil;
        }
    }
    return hasil;
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    int tc, tc1;
    char kalimat[101];
    char newKalimat[50][40];
    fscanf(fp, "%d\n", &tc);
    Word kata[tc];
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%[^#]#%[^\n]\n", &kata[i].sw, &kata[i].ow);
    }
    fscanf(fp, "%d\n", &tc1);   
    for(int i = 0 ; i < tc1; i++){
        fscanf(fp, "%[^\n]\n", kalimat);
        int counterWord = 0;
        int counter = 0;
        for(int j = 0; j <= strlen(kalimat); j++){
            if(kalimat[j] == ' '|| kalimat[j] == '\0') {
                newKalimat[counterWord][counter] = '\0';
                counterWord++;
                counter = 0;
            } else {
                newKalimat[counterWord][counter] = kalimat[j];
                counter++;
            }
        }

        printf("Case #%d:\n", i+1);

        for(int j = 0; j < counterWord; j++){
            int result = searchWord(newKalimat[j], tc, kata);
            if(result != -1){
                if(j == 0){
                    printf("%s", kata[result].ow);
                } else {
                    printf(" %s", kata[result].ow);
                }
            } else {
                if(j == 0){
                    printf("%s", newKalimat[j]);
                } else {
                    printf(" %s", newKalimat[j]);
                }    
            }
        }
        printf("\n");
    }
    fclose(fp);
    return 0;
}