/* main.c */

#include <reversi.h>

/* extern void start_game(int board[][]); */
/* extern void Show(int board[][]); */
/* extern void Jubge(int board[][]); */

int main(void){

  start_game(board);

	show(board);
	Jubge(board); // jubge winner
	
	return 0;
}
