/* ����̓����e�J�����@��p���ĉ~�����̋ߎ��l�����߂�v���O�����ł� */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
	int i, n, s=0;
	double x, y, pi;
	
	printf("���s�񐔂�?\n");
	scanf("%d", &n);
	printf("���s�񐔂�%d��̂Ƃ��̉~�����̋ߎ��l�ł�\n", n);
	
	for(i = 0; i < n; i++){
		x = rand() / (RAND_MAX+1.0); /* ������0����1�ȓ��̒l�ɕϊ� */
		y = rand() / (RAND_MAX+1.0);
		
		if(x*x + y*y <= 1.0){
			s++;
		}
	}
	
	pi = 4.0*((double)s / (double)n);
	printf("%f\n", pi);
	
	return 0;
}
