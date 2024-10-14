/*buatlah program untuk menentukan bilangan
  > positif genap
  > positif ganjil
  > negatif genap
  > negatif ganjil */
#include <stdio.h>
int main(){
	int bilangan = -3;
	
	if(bilangan > 0 && bilangan %2 == 0)
		printf(" Positif Genap");
	else if(bilangan > 0 && bilangan %2 != 0)
		printf(" Positif Ganjil");
	else if(bilangan < 0 && bilangan %2 == 0)
		printf(" Negatif Genap");
	else
		printf(" Negatif Ganjil");
	return 0;
}
