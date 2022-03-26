#include <stdio.h>
#include <string.h>

struct Song{
    char songName[1001];
    char name[1001];
    long long int view;
};

void sortView(Song list[], int tc){
    Song temp;
    for(int i = 0; i < tc; i++){
        for(int j = 0; j < tc-i-1; j++){
            if(list[j].view < list[j+1].view){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

void sortName(Song list[], int tc){
    Song temp;
    for(int i = 0; i < tc; i++){
        for(int j = 0; j < tc-i-1; j++){
            if(strcmp(list[j].songName, list[j+1].songName) > 0){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    Song list[101];
    int index = 0;
    while(fscanf(fp, "%[^#]#%[^#]#%lld\n", list[index].songName, list[index].name, &list[index].view) != EOF){
        index++;
    }
    sortName(list, index);
    sortView(list, index);
    for(int i = 0; i < index; i++){
        printf("%s by %s - %lld\n", list[i].songName, list[i].name, list[i].view);
    }
    return 0;
}