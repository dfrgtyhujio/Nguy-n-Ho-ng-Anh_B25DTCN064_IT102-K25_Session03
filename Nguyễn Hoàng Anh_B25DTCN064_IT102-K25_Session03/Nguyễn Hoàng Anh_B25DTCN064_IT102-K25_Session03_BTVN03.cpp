#include <stdio.h>
#include <math.h>

int main(){
	
	int r;
	int chuvi;
	int dientich; 
	printf("Nhap Ban Kinh : ");
	scanf("%d", &r);
	chuvi = 2 * M_PI * r ;
	dientich = M_PI * pow(r,2); 
	printf("chuvi = %d\n", chuvi );
	printf("dientich = %d\n", dientich );
	
	return 0;
} 
