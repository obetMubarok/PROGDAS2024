#include <stdio.h> 
int main(){
	double panjang;
	double lebar;
	double luas;
	
	printf("--PROGRAM HITUNG LUAS PERSEGI PANJANG--\n");
	printf("---------------------------------------\n");
	
	printf("masukkan panjang(cm) : ");
	scanf("%lf",&panjang);//input panjang
	
	printf("masukkan lebar(cm) : ");
	scanf("%lf", &lebar);//input lebar
	
	luas = panjang * lebar;//hitung luas dan simpan ke variabel luas
	printf("Luas persegi panjang : %.2lf cm",luas);//output nilai var luas
	
	getchar();
	return 0;	
}



