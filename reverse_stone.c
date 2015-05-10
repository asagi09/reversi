/* reverseStone.c */

int reverseUp(int b[N][N], int n, int m, int turn){
	int c=1;
	int sum;
	
	while(1){
		if(n-c < 0)
			return 0;
		if(b[n-c][m] == 0)
			return 0;
		if(b[n-c][m] == turn){
			sum = c-1;
			while(c-1){
				c--;
				b[n-c][m] = turn;
			}
			return sum;
		}
		c++;
	}
}

int reverseDown(int b[N][N], int n, int m, int t){
	int c=1;
	int sum;
	
	while(1){
		if(n+c >= N)
			return 0;
		if(b[n+c][m] == 0)
			return 0;
		if(b[n+c][m] == t){
			sum = c-1;
			while(c-1){
				c--;
				b[n+c][m] = t;
			}
			return sum;
		}
		c++;
	}
}

int reverseLeft(int b[N][N], int n, int m, int t){
	int c=1;
	int sum;
	
	while(1){
		if(m-c < 0)
			return 0;
		if(b[n][m-c] == 0)
			return 0;
		if(b[n][m-c] == t){
			sum = c-1;
			while(c-1){
				c--;
				b[n][m-c] = t;
			}
			return sum;
		}
		c++;
	}
}

int reverseRight(int b[N][N], int n, int m, int t){
	int c=1;
	int sum;
	
	while(1){
		if(m+c >= N)
			return 0;
		if(b[n][m+c] == 0)
			return 0;
		if(b[n][m+c] == t){
			sum = c-1;
			while(c-1){
				c--;
				b[n][m+c] = t;
			}
			return sum;
		}
		c++;
	}
}

int reverseUpLeft(int b[N][N], int n, int m, int t){
	int c=1;
	int sum;
	
	while(1){
		if(n-c < 0 || m-c < 0)
			return 0;
		if(b[n-c][m-c] == 0)
			return 0;
		if(b[n-c][m-c] == t){
			sum = c-1;
			while(c-1){
				c--;
				b[n-c][m-c] = t;
			}
			return sum;
		}
		c++;
	}
}

int reverseUpRight(int b[N][N], int n, int m, int t){
	int c=1;
	int sum;
	
	while(1){
		if(n-c < 0 || m+c >= N)
			return 0;
		if(b[n-c][m+c] == 0)
			return 0;
		if(b[n-c][m+c] == t){
			sum = c-1;
			while(c-1){
				c--;
				b[n-c][m+c] = t;
			}
			return sum;
		}
		c++;
	}
}

int reverseDownLeft(int b[N][N], int n, int m, int t){
	int c=1;
	int sum;
	
	while(1){
		if(m-c < 0 || n+c >= N)
			return 0;
		if(b[n+c][m-c] == 0)
			return 0;
		if(b[n+c][m-c] == t){
			sum = c-1;
			while(c-1){
				c--;
				b[n+c][m-1] = t;
			}
			return sum;
		}
		c++;
	}
}

int reverseDownRight(int b[N][N], int n, int m, int t){
	int c=1;
	int sum;
	
	while(1){
		if(n+c >= N || m+c >= N)
			return 0;
		if(b[n+c][m+c] == 0)
			return 0;
		if(b[n+c][m+c] == t){
			sum = c-1;
			while(c-1){
				c--;
				b[n+c][m+c] = t;
			}
			return sum;
		}
		c++;
	}
}

