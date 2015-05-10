/* main.c */

#include <reversi.h>

extern void startGame(int board[][]);
extern void Show(int board[][]);
extern void Jubge(int board[][]);

int main(void){

  startGame(board);

	Show(board);
	Jubge(board); // jubge winner
	
	return 0;
}
