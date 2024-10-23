#include <stdio.h>
#include <math.h>
int main(){
	int i = 1;
	int angka;
	do{
		angka = pow(2,i);
		printf("%d ",angka);
		i++;
	}while(i<=10);
	return 0;
}
