/* ニュートン法を用いて代数方程式の解を求めるプログラム */
#include <stdio.h>

double f(double x){
	return (x - 1) * (x - 1);
}

double f_prime(double x){
	return 2 * (x - 1);
}

int main(void){
	int i, n;
	double x, x_init=2.0;
	
	printf("試行回数を入力してください\n");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		x = x_init - f(x) / f_prime(x_init);
		x_init = x;
	}
	printf("解の近似値：%f", x);
	
	return 0;
}
