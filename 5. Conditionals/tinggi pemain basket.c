/*
	Diketahui sebuah club basket BB akan membuka pendaftaran anggota
Syarat masuk adalah peserta mempunyai tinggi badan 170cm.
Buatlah program untuk mengecek tinggi badan

*/
#include <stdio.h>
int main()
{
	//var
	int tinggiMin = 170;
	int tinggiInput;
	
	//input
	printf("masukkan tinggi badan : ");
	scanf("%d",&tinggiInput);
	
	//output
	if(tinggiInput>=tinggiMin){ 
		printf("lolos");
	}else{
		printf("tidak lolos");
	}
	return 0;
}
