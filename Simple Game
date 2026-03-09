#include <stdio.h>

char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

void display() {

    printf("\n");
    for(int i=0;i<3;i++) {

        for(int j=0;j<3;j++) {

            printf(" %c ",board[i][j]);

            if(j<2) printf("|");
        }

        if(i<2) printf("\n---|---|---\n");
    }
}

int main() {

    int pos;
    char player = 'X';

    for(int turn=0;turn<9;turn++) {

        display();

        printf("\nPlayer %c choose position: ",player);
        scanf("%d",&pos);

        int row = (pos-1)/3;
        int col = (pos-1)%3;

        if(board[row][col] != 'X' && board[row][col] != 'O')
            board[row][col] = player;
        else {
            printf("Invalid move\n");
            turn--;
            continue;
        }

        player = (player=='X') ? 'O' : 'X';
    }

    display();
}
