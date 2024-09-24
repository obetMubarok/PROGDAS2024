#include <stdio.h>
int main(){
	//1. devinisi variabel
	int bil1=4, bil2=3;
	int hasilTambah, hasilKurang, hasilKali, hasilMod;
	double hasilBagi;//menggunakan double karena hasil bagi memungkinkan desimal
	
	//2. input
	
	//3. proses
	hasilTambah = bil1 + bil2;
	hasilKurang = bil1 - bil2;
	hasilKali = bil1 * bil2;
	hasilMod = bil1 % bil2;
	hasilBagi = (double)bil1 / (double)bil2;//parsing(konversi) dari int ke double supaya hasil desimal
	
	//4. output
	printf("%d + %d = %d\n",bil1,bil2,hasilTambah);
	printf("%d - %d = %d\n",bil1,bil2,hasilKurang);
	printf("%d * %d = %d\n",bil1,bil2,hasilKali);
	printf("%d mod %d = %d\n",bil1,bil2,hasilMod);
	printf("%d / %d = %.2lf\n",bil1,bil2,hasilBagi);
	
	return 0;
}
