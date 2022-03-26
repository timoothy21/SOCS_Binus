#include <stdio.h>

int board[8][8];
int movex[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int movey[8] = {1, 2, 2, 1, -1, -2, -2, -1};

bool validate(int x, int y){
    if((x >= 0 && x <= 7) && (y >=0 && y<= 7)) return true;
    return false;
}


int move(int x, int y){
    for(int i = 0; i < 8; i++){
        int tempx = x+movex[i];
        int tempy = y+movey[i];
        if(validate(tempx,tempy)){
            if(board[x][y] < board[tempx][tempy]){
                board[tempx][tempy] = board[x][y]+1;
                move(tempx, tempy);
            }
        }
    }

    return 0;
}


int main (){
    int tc;
    scanf("%d", &tc);
    char awal[3];
    char target[3];
    for(int p = 0; p < tc; p++){
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                board[i][j] = 10000;
            }
        }
        scanf("%s %s", &awal, &target);
        int x = awal[0] - 64;
        int y = awal[1] - 48;
        int targetx = target[0] - 64;
        int targety = target[1] - 48;
        printf("%d %d\n", x, y);
        board[8-y][x-1] = 0;

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                printf("%d ", board[i][j]);
            }
            puts("");
        }

        move(8-y, x-1);

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                printf("%d ", board[i][j]);
            }
            puts("");
        }

        printf("Case #%d: %d\n", p+1, board[8-targety][targetx-1]);

    }

    return 0;
}