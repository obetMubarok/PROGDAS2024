/*buatlah program untuk menentukan bilangan
  > positif genap
  > positif ganjil
  > negatif genap
  > negatif ganjil */
#include <stdio.h>
int main(){
	int bilangan = 3;
	
	if(bilangan > 0 ){
		printf(" Positif ");
		if(bilangan %2 == 0)
			printf("Genap");
		else
			printf("Ganjil");
	}else{
		printf(" Negatif ");
		if(bilangan %2 == 0)
			printf("Genap");
		else
			printf("Ganjil");
	}
	return 0;
}
