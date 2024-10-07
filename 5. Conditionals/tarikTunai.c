/*
	Diketahui saldo sebuah tabungan senilai Rp 600.000
Buatlah program Tarik tunai, jika nominal yang ditarik kurang dari saldo maka muncul pesan “silahkan ambil uang” dan menampilkan saldo sisa
Jika tidak maka muncul pesan “maaf saldo anda kurang”

*/
#include <stdio.h>
int main()
{
	//var
	double saldo = 600000;
	double tarik;
	
	//input
	printf("Tarik Tunai sebesar : ");
	scanf("%lf",&tarik);
	
	//proses dan output
	if(tarik < saldo){
		printf("silahkan ambil uang \n");
		printf("saldo sisa Rp %.lf",(saldo-tarik));
	}else{
		printf("maaf saldo kurang");
	}
	return 0;
}
