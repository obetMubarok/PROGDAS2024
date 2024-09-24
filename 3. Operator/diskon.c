/*
Buatlah program discount, 
program mampu menghitung harga setelah didiskon, 
program akan menerima masukan harga awal dan besar diskon(%), 
Selanjutnya program menampilkan harga awal dan harga setelah didiskon.
*/
#include <stdio.h>
int main(){
	//1. devinisi variabel
	double hargaAwal, hargaDiskon, diskon;
	
	//2. input
	printf("Masukkan harga awal : ");
	scanf("%lf", &hargaAwal);
	printf("Masukkan diskon(persen) : ");
	scanf("%lf", &diskon);
	
	//3. proses
	hargaDiskon = hargaAwal - (diskon/100*hargaAwal);
	
	//4. output
	printf("Harga awal Rp %.lf setelah didiskon menjadi Rp %.lf", hargaAwal,hargaDiskon);
	return 0;
}
