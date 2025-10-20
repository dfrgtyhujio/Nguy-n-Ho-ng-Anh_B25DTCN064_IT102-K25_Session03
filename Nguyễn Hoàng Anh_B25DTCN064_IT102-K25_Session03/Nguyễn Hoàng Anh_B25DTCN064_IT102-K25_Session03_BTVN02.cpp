#include <stdio.h>

int main(){
	
	int Fahrenheit;
	int Celsius;
	printf("Nhap Celsius : ");
	scanf("%d", &Celsius);
	Fahrenheit = Celsius * 9/5 +32; 
	printf("Fahrenheit = %d\n", Fahrenheit );
	
	return 0;
} 
