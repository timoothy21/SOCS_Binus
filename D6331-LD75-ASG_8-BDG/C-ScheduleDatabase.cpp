#include <stdio.h>

struct data{
    char matkul[1001];
    char hari[1001];
    int time;
};

int main (){
    int tc, tc1, temp;
    scanf("%d", &tc);
    struct data pelajaran[tc];
    for(int i = 0; i < tc; i++){
        scanf("%s", &pelajaran[i].matkul);
        scanf("%s", &pelajaran[i].hari);
        scanf("%d", &pelajaran[i].time);
    }

    scanf("%d", &tc1);
    for(int i = 0; i < tc1; i++){
        scanf("%d", &temp);
        printf("Query #%d:\n", i+1);
        printf("Code: %s\n", pelajaran[temp-1].matkul);
        printf("Day: %s\n", pelajaran[temp-1].hari);
        if(pelajaran[temp-1].time < 10){
            printf("Time: 0%d:00\n", pelajaran[temp-1].time);
        } else if(pelajaran[temp-1]. time >= 10){
            printf("Time: %d:00\n", pelajaran[temp-1].time);
        }
    }

    return 0;
}