#include <stdio.h>
#include <stdbool.h>
//buat fungsi yg MENGEMBALIKAN nilai 75
int get75(){
	return 75;
}
//buat fungsi yg mengembalikan hasil penjumlahan 2 nilai
int tambah(int a, int b){
	int hasil = a + b;//5+3
	return hasil;
	//return a+b;
}
//buat fungsi yg return hasil penjumlahan 3 nilai
int tambah3(int a, int b, int c){
	int nilai = a + b + c;
	return nilai;
	//return a+b+c;
}
//buat fungsi yg mengembalikan nilai PHI 3.14
double getPHI(){
	return 3.14;
}
//fungsi mengembalikan f(x) = 5x+1
double f(double x){
	return 5*x+1;
}
//fungsi cek sebuah angka apakah 0 atau bukan
bool cekNilai0(int x){
	bool hasil = false;
	if(x == 0)
		hasil = true;
		
	return hasil;
	//return x==0;
}
//kuadrat
int kuadrat(int a){
	return a*a;
}
//pangkat
int pangkat(int a, int b){
	int hasil = 1;
	int i;
	for(i=0; i<b; i++){
		hasil*=a;
	}
	return hasil;
}
//fungsi mengubah saldo = 50.000
void ubahSaldo(double *a){
	*a = 50000;
}
//fungsi menampilkan pesan ke layar "belajar fungsi"
void pesan(){
	printf("belajar fungsi\n");
}
//fungsi yang menampilkan pesan "hallo budi", budi adalah parameter
void hello(char nama[10]){
	printf("hallo %s\n", nama);
}
//fungsi menampilkan "lulus" atau "gagal"
// jika nilai yg di cek <50 maka gagal
void lulus(int nilai){
	if(nilai<50)
		printf("GAGAL");
	else
		printf("LULUS");
}
int main(){
	double saldo = 100000;
	ubahSaldo(&saldo);
	return 0;
}
