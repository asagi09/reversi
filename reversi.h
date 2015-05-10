/* reversi.h */

#define N 8 // board size
#define M 3 // read what to phasing destination
#define START_PLAYER 1 // set start prayer(1 or -1)

int reverseUp(int board[N][N], int x, int y, int turn);
int reverseDown(int board[N][N], int x, int y, int turn);
int reverseLeft(int board[N][N], int x, int y, int turn);
int reverseRight(int board[N][N], int x, int y, int turn);
int reverseUpLeft(int board[N][N], int x, int y, int turn);
int reverseUpRight(int board[N][N], int x, int y, int turn);
int reverseDownLeft(int board[N][N], int x, int y, int turn);
int reverseDownRight(int board[N][N], int x, int y, int turn);
int Set(int board[N][N], int x, int y, int turn);
int Calc(int board[N][N], int x, int y, int turn);
int Possible(int board[N][N], int turn);
int tryToSet(int board[N][N], int turn, int count);
void AI(int board[N][N], int turn);
void Show(int board[N][N]);
void inputYourMove(int board[N][N]);
void startGame(int board[N][N]);
void Jubge(int board[N][N]);
void initializeBoard(int board[N][N]);
void copyBoard(int board[][], int bcopy[][]);

