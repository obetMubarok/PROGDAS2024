/*
	Buatlah program yang menerima masukan user berupa total biaya belanja dan apakah dia termasuk member atau bukan.
Jika member maka dapat potongan 20%.
Tampilkan biaya yang harus dibayar


*/
#include <stdio.h>
int main()
{
	//var
	double harga;
	char member;
	
	//input
	printf("biaya : ");
	scanf("%lf",&harga);
	fflush(stdin);
	printf("member(y/n) : ");
	scanf("%c",&member);
	
	//proses dan output
	if(member == 'y'){
		harga -= (0.2*harga);
		
	}
	printf("silahkan bayar : %.lf",harga);
	return 0;
}
