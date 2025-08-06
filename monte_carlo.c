/* これはモンテカルロ法を用いて円周率の近似値を求めるプログラムです */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
	int i, n, s=0;
	double x, y, pi;
	
	printf("試行回数は?\n");
	scanf("%d", &n);
	printf("試行回数が%d回のときの円周率の近似値です\n", n);
	
	for(i = 0; i < n; i++){
		x = rand() / (RAND_MAX+1.0); /* 乱数を0から1以内の値に変換 */
		y = rand() / (RAND_MAX+1.0);
		
		if(x*x + y*y <= 1.0){
			s++;
		}
	}
	
	pi = 4.0*((double)s / (double)n);
	printf("%f\n", pi);
	
	return 0;
}
