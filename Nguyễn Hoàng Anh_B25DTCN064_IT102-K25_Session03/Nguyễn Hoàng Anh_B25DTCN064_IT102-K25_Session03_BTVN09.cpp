#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n (n > 1) : ");
	scanf("%d", &n);

    double expression1 = 1.0 / ((n - 1) * n);
    double expression2 = 1.0 / (n * (n + 1));
    double expression3 = 1.0 / ((n + 1) * (n + 2));

    double A = expression1 + expression2 - expression3 ;
    printf("A = %.6lf",A);

    return  0;
}


