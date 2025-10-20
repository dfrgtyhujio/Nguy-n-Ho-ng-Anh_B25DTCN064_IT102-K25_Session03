#include <stdio.h>
#include <math.h>

int main(){
	
	float diemToan, diemVan, diemAnh;
	float tongDiem; 
	float diemTrungBinh; 
	
	printf("Diem Toan : ");
	scanf("%f", &diemToan);
	printf("Diem Van : ");
	scanf("%f", &diemVan);
	printf("Diem Anh : ");
	scanf("%f", &diemAnh);
	
	tongDiem = diemToan + diemVan + diemAnh;
	diemTrungBinh = (diemToan + diemVan + diemAnh)/3 ;
	 
	printf("Tong Diem = %.2f\n", tongDiem );
	printf("Diem Trung Binh = %.2f\n", diemTrungBinh );
	
	return 0;
} 
