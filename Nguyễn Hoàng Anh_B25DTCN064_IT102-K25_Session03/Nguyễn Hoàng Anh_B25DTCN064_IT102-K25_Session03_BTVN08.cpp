#include<stdio.h>
#include<math.h>

int main(){
    int a ;
    int result = 0 ;
    printf("Nhap 4 chu so : ");
	scanf("%d", &a);

    int unit = a % 10 ;
    a /= 10 ;
    result += unit ;

    int dozens = a % 10 ;
    a /= 10 ;
    result *= 10 ;
    result += dozens ;


    int hundred = a % 10 ;
    a /= 10 ;
    result *= 10 ;
    result += hundred ;

    int thousands = a % 10 ;
    a /= 10 ;
    result *= 10 ;
    result += thousands ;


    printf("so dao nguoc la : %d\n",result) ;

    return 0;
}

