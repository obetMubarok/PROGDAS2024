/*
	Buatlah program yang menerima masukan user berupa sebuah angka,
Program akan mengecek apakah angka tersebut merupakan bilangan kelipatan 4 atau bukan

*/
#include <stdio.h>
int main()
{
	//var
	int bilangan;
	
	//input
	printf("masukkan bilangan : ");
	scanf("%d",&bilangan);
	
	//output
	if(bilangan%4 == 0){//habis dibagi 4 
		printf("bilangan tersebut kelipatan 4");
	}else{
		printf("bilangan tersebut bukan kelipatan 4");
	}
	return 0;
}
