#include <stdio.h>
#include <math.h>

int main(){
	
	float doDaiCanhDay, chieuCao;
	float dienTichTamGiac; 
	
	printf("Do Dai Canh Day : ");
	scanf("%f", &doDaiCanhDay);
	printf("hieu Cao : ");
	scanf("%f", &chieuCao);
	
	dienTichTamGiac = 1.0/2 * doDaiCanhDay * chieuCao;
	 
	printf("Dien Tich Tam Giac = %.2f\n", dienTichTamGiac);
	
	return 0;
} 
