#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int input = 0;
	int pin;
	while(input != 5){//perulangan dilakukan selama input != 5
		system("cls");
		printf("Menu\n1.menu1\n2.menu2\n3.menu3\n4.menu4\n5.exit");
		printf("\npilih : ");
		scanf("%d",&input);
		switch(input){
			case 1:
				system("cls");
				printf("masukkan pin : ");
				scanf("%d", &pin);
				printf("pin anda %d\n", pin);
				system("pause");
				break;
			case 5:
				system("cls");
				printf("selamat tinggal");
				break;
		}
	}
	return 0;
}
