#include <stdio.h>
int main(){
	int data = 5;
	
	//menampilkan nilai dari variabel data
	printf("%d \n", data);
	
	//menampilkan address/alamat dari variabel data
	//dengan menambahkan simbol &
	printf("%x", &data);
	return 0;
}
