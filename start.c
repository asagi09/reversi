/* start.c */

#include <reversi.h>

extern void initializeBoard(board);
extern void inputYourMove(board);

void startGame(int board[][]){
	int board[N][N];
	int turn = START_PLAYER;
	int reminning_space = 59;

  initializeBoard(board);
  while(remaining_space){
    inputYourMove(board);
  }
}

