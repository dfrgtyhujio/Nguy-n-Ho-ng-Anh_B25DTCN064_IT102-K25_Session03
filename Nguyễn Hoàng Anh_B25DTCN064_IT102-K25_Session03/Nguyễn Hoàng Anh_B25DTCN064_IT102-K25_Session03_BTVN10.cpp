#include<stdio.h>
#include<math.h>

int main() {
    int a,b;
    printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	
	double S = sqrt(a + sqrt(b + 1)) + sqrt(b+ sqrt(pow(a,2)+pow(b,2)));
	printf("S = %.2lf",S);

    return  0;
}


