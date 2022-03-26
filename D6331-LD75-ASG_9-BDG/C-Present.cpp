#include <stdio.h>

int main (){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int tc1;
        scanf("%d", &tc1);
        int data[tc1];
        int max = 0;
        for(int j = 0; j < tc1; j++){
            scanf("%d", &data[j]);
            if(max < data[j]){
                max = data[j];
            }
        }
        int counter = 0;
        for(int j = 0; j < tc1; j++){
            if(data[j] == max){
                counter++;
            }
        }
        printf("Case #%d: %d\n", i+1, counter);
    }
    return 0;
}