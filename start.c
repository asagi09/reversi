/* start.c */

#include <reversi.h>

void start_game(unsigned char board[][]){
	unsigned char board[N][N];
	unsigned char turn = START_PLAYER;
  int remaining_space = 59;
  int numbers_of_pass = 0;

  initialize_board(board);
  while(remaining_space){
    if(turn == BLACK)
      if(input_move(board, turn) != 0)
        if(numbers_of_pass == 1)
          break;
        else
          numbers_of_pass = 1;

    else
      
  }
}

