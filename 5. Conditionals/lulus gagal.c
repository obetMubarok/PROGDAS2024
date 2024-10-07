/*
	buatlah program untuk menentukan kelulusan siswa, dilihat dari nilai
	jika nilai lebih besar dari 60 maka lulus
	jika tidak maka gagal
*/
#include <stdio.h>
int main()
{
	//var
	int nilai = 50;
	
	//output
	if(nilai>60){//nilai false maka menjalankan else
		printf("selamat Lulus");
	}else{
		printf("maaf Gagal");
	}
	return 0;
}
