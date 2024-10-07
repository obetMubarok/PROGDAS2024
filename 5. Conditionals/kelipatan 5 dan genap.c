/*
	Buatlah program untuk menentukan sebuah angka termasuk angka genap dan kelipatan 5 !

*/
#include <stdio.h>
int main()
{
	//var
	int bil;
	
	//input
	printf("masukkan bilangan : ");
	scanf("%int",&bil);
	
	//output
	if(bil%5==0 && bil%2==0){
		printf("bilangan genap kelipatan 5");
	}else{
		printf("bukan bilangan genap kelipatan 5");
	}
	return 0;
}
