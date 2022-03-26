#include <stdio.h>
#include <string.h>

void sort(char arr[][100], int n){
    char temp[100];
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < n - 1 - i; j++){
            if(strcmp(arr[j], arr[j+1]) > 0){
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

int main() {
    int tc;
    scanf("%d", &tc);
    char name[tc][100];
    for(int i = 0; i < tc; i++){
        scanf("%s", name[i]);
    }
    sort(name, tc);
    for(int i = 0; i < tc; i++){
        printf("%s\n", name[i]);
    }
    return 0;
}