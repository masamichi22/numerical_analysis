#include <stdio.h>
#include <math.h>

double function(double x) {
    return x * x - 2 * x - 10; /* (x-1)^2 - 11 */
}

int main(void) {
    int i, n;
    double start, end, mid;
    
    printf("���s�񐔂�? ");
    scanf("%d", &n);
    printf("�n�_��? ");
    scanf("%lf", &start);
    printf("�I�_��? ");
    scanf("%lf", &end);
    
    for (i = 0; i < n; i++) {
        mid = (start + end) / 2.0;
        
        if (fabs(function(mid)) < 1e-6) {  // ��������
            break;
        }

        if (function(start) * function(mid) > 0) {
            start = mid;
        } else {
            end = mid;
        }
    }
    printf("�ߎ���: %f\n", mid);
    return 0;
}

