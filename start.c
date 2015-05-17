/* start.c */

#include <reversi.h>

/* extern void initializeBoard(board); */
/* extern void inputYourMove(board); */

void start_game(unsigned char board[][]){
	unsigned char board[N][N];
	unsigned char turn = START_PLAYER;
  int remaining_space = 59;

  initialize_board(board);
  while(remaining_space){
    input_move(board);
  }
}

