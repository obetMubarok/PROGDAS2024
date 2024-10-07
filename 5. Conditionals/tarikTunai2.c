/*
	Kembangkan program Tarik tunai pada soal Latihan ke-1
Program Tarik tunai harus mengecek nominal yang akan ditarik harus kurang dari saldo dan kelipatan 50.000

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
	if(tarik < saldo && (int)tarik%50000 == 0){
		printf("silahkan ambil uang \n");
		printf("saldo sisa Rp %.lf",(saldo-tarik));
	}else{
		printf("maaf saldo kurang atau pecahan salah");
	}
	return 0;
}
