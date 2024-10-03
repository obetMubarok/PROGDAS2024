#include <stdio.h>
int main(){
	int data = 50;
	int *ptr = &data;//pointer ptr menunjuk ke alamat variabel data
	
	printf("%x \n", &data);//menampilkan alamat variabel data
	printf("%x \n", &ptr);//menampilkan alamat pointer ptr
	printf("%d \n", data);//menampilkan nilai variabel data
	printf("%d \n", *ptr);//menampilkan nilai yang ditunjuk pointer ptr
	
	*ptr = 70;//proses pointer ptr mengubah nilai variabel data = 70
	printf("data berubah = %d", data);
	
	
	return 0;
}
