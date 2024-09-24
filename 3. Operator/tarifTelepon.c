/*
	Buatlah program untuk menghitung biaya telepon dengan tarif Rp 500/menit.
	Program menerima masukan berupa detik. 
	(kelebihan detik kurang dari 60 gratis).
	Tampilkan biaya telepon ke layar
*/
#include <stdio.h>
int main(){
	//1. definisi variabel
	int detik;
	double biaya;
	
	//2. input
	printf("Masukkan jumlah detik : ");
	scanf("%d", &detik);
	
	//3. proses
	biaya = detik/60 * 500;//konversi detik ke menit, selanjutnya kalikan 500
	
	//4. output
	printf("Biaya telepon selama %d menit adalah Rp %.lf", (detik/60),biaya);
	return 0;
}
