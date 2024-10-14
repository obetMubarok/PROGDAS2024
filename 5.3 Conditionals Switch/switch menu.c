/*buatlah program untuk menampilkan MENU menggunakan switch*/
#include <stdio.h>
int main(){
	int pilih;
	printf("MENU MAKANAN\n");
	printf("1. Ikan Bakar \t\t13K\n");
	printf("2. Ikan Goreng \t\t13K\n");
	printf("3. Ayam Goreng \t\t14K\n");
	printf("4. Ayam Bakar \t\t14K\n");
	printf("5. Ayam Geprek \t\t15K\n");
	printf("6. Ayam Penyet \t\t15K\n");
	printf("7. Sate Kambing \t20K\n");
	printf("pilih : ");
	scanf("%d", &pilih);
	
	switch(pilih){
		case 1: 
			printf("Ikan Bakar");
			break;
		case 2: 
			printf("Ikan Goreng");
			break;
		case 3: 
			printf("Ayam Goreng");
			break;
		case 4: 
			printf("Ayam Bakar");
			break;
		case 5: 
			printf("Ayam Geprek");
			break;
		case 6: 
			printf("Ayam Penyet");
			break;
		case 7: 
			printf("Sate Kambing");
			break;
		default : 
			printf("pilihan salah");
	
	}
	return 0;
}
