#include<stdio.h>
#include<math.h>

int main(){
    int a ;
    printf("Nhap 4 chu  so : ");
	scanf("%d", &a);

    int unit = a % 10 ;
    a /= 10 ;

    int dozens = a % 10 ;
    a /= 10 ;

    int hundred = a % 10 ;
    a /= 10 ;

    int thousands = a % 10 ;
    a /= 10 ;


    int sum = unit + dozens + hundred + thousands ;
    printf("sum : %d",sum) ;

    return 0;
}

