#include <stdio.h>
int main(){
	int data1 = 50;
	int data2 = 100;
	int *ptr;
	
	ptr = &data1;//menunjuk ke alamat variabel data1
	printf("%d", *ptr);
	
	ptr = &data2;//menunjuk ke alamat variabel data2
	printf("\n%d", *ptr);
	
	return 0;
}
