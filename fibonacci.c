#include<stdio.h>

int f(int n){
	int i,answer=0;
	if(n == 0 || n == 1){
		return 1;
	}
	for(i=2; i<n; i++){
		answer += f(i-1) + f(i-2);
	}
	return answer;
}

int main(void){
	int input;
	
	printf("�t�B�{�i�b�`����̑�n��(n>=0)�̐��l���o�͂���v���O�����ł��D���߂���n����͂��Ă��������D\n");
	scanf("%d", &input);
	printf("%d\n", f(input));
	
	return 0;
}
