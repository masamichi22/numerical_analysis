/* �j���[�g���@��p���đ㐔�������̉������߂�v���O���� */
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
	
	printf("���s�񐔂���͂��Ă�������\n");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		x = x_init - f(x) / f_prime(x_init);
		x_init = x;
	}
	printf("���̋ߎ��l�F%f", x);
	
	return 0;
}
