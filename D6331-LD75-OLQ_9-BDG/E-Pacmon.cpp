#include <stdio.h>
#include <string.h>

int movex[4] = {0, -1, 0, 1};
int movey[4] = {-1, 0, 1, 0};
char board[110][110];
int visited[110][110];
int count = 0;

void move(int x, int y, int sisiPanjang, int sisiLebar) {
    for(int i = 0; i < 4; i++){
        int tempx = x + movex[i];
        int tempy = y + movey[i];
        if((tempx >= 0 && tempy >= 0) && (tempx < sisiLebar && tempy < sisiPanjang) && board[tempy][tempx] != '#' && visited[tempy][tempx] == 0){
            if(board[tempy][tempx] == '*'){
                count++;
            }
            visited[tempy][tempx] = 1;
            move(tempx, tempy, sisiPanjang, sisiLebar);
        }
    }
}

int main (){
    int tc;
    int panjang, lebar;
    scanf("%d", &tc);
    for(int x = 0; x < tc; x++){
        memset(visited, 0, sizeof(visited));
        count = 0;
        scanf("%d %d", &panjang, &lebar);
        int mulaix, mulaiy;
        for(int i = 0; i < panjang; i++){
            scanf("%s", &board[i]);
            for(int j = 0; j < lebar; j++){
                if(board[i][j] == 'P'){
                    mulaix = j;
                    mulaiy = i;
                }
            }
        }
        // printf("%d %d\n", mulaix, mulaiy);
        move(mulaix, mulaiy, panjang, lebar);
        printf("Case #%d: %d\n", x+1, count);
    }

    return 0;
}