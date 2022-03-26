#include <stdio.h>

int tc1, arr[101];

void dfs(int index, int sum){
    if(index > tc1-((tc1+1)/2) && index <= tc1){
        printf("%d\n", sum);
        return;
    }
    if(index*2 <= tc1) dfs(index*2, sum + arr[index*2]);
    if(index*2+1 <= tc1) dfs(index*2+1, sum + arr[index*2+1]);

}

int main (){
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++){
        scanf("%d", &tc1);
        for(int j = 1; j <= tc1; j++){
            scanf("%d", &arr[j]);
        }
        printf("Case #%d:\n", i);
        dfs(1, arr[1]);
    }

    return 0;
}