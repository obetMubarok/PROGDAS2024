#include <stdio.h>
int main(){
	//1. definisi variabel
	double saldo = 100000;
	double setor;
	
	//2. input
	printf("Saldo : Rp %.lf\n", saldo);
	printf("Masukkan jumlah setoran : ");
	scanf("%lf", &setor);
	
	//3. proses
	saldo += setor;//saldo = saldo + setor;
	
	//4. output
	printf("Setor tunai berhasil\nSaldo : Rp %.lf", saldo);
	return 0;
}
