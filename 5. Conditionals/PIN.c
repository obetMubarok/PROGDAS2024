/*
	Buatlah program memasukkan PIN
Program akan mencocokan PIN yang dimasukan user dengan PIN yang tersimpan di program
Jika sama, maka mucul pesan “Tranfer Berhasil”
Jika tidak maka muncul pesan “PIN salah”

*/
#include <stdio.h>
int main()
{
	//var
	int pin = 1234;
	int pinUser;
	
	//input
	printf("masukkan PIN : ");
	scanf("%d",&pinUser);
	
	//output
	if(pinUser == pin){ 
		printf("Transfer berhasil");
	}else{
		printf("PIN salah");
	}
	return 0;
}
