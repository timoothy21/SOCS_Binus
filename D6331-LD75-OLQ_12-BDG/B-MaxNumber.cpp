#include <stdio.h>

void deleteNum(int number[], int tc, int out){
    for(int i = 0; i < tc; i++){
        if(out == number[i]){
            number[i] = -1;
        }
    }
}

int findMax(int number[], int tc){
    int max = -1;
    for(int i = 0; i < tc; i++){
        if(max < number[i]){
            max = number[i];
        }
    }
    return max;
}

int main() {
    int tc, tc1;
    scanf("%d %d", &tc, &tc1);
    int number[tc];
    int out;
    for(int i = 0; i < tc; i++){
        scanf("%d", &number[i]);
    }
    for(int i = 0; i < tc1; i++){
        scanf("%d", &out);
        deleteNum(number, tc, out);
    }
    int result = findMax(number, tc);
    printf("Maximum number is %d\n", result);
    return 0;
}