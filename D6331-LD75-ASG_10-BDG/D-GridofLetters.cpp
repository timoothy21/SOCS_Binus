#include <stdio.h>
#include <string.h>

struct Data{
    char kata[201];
};

void sortHuruf(Data t[], int tc, int tc1) {
    for(int k = 0; k < tc; k++){
        for(int i = 0; i < tc1; i++){
            for(int j = 0; j < tc1-i-1; j++){
                if(t[k].kata[j] > t[k].kata[j+1]){
                    char temp = t[k].kata[j];
                    t[k].kata[j] = t[k].kata[j+1];
                    t[k].kata[j+1] = temp;
                }
            }
        }
    }
}

void sortKata(Data t[], int tc) {
    Data temp;
    for(int i = 0; i < tc; i++){
        for(int j = 0; j < tc-i-1; j++){
            if(strcmp(t[j].kata, t[j+1].kata) < 0){
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }
}

int main() {
    int tc, tc1;
    scanf("%d %d", &tc, &tc1);
    Data t[tc];
    for(int i = 0; i < tc; i++) {
        scanf("%s", t[i].kata);
    }
    sortHuruf(t, tc, tc1);
    sortKata(t, tc);
    for(int i = 0; i < tc; i++) {
        printf("%s\n", t[i].kata);
    }
    return 0;
}