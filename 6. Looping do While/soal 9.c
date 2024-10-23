#include <stdio.h>
#include <math.h>
int main(){
	int angka1 = 8;
	int angka2 = 11;
	int i=0;
	int ganjil = 9;
	do{
		printf("%d %d ",angka1, angka2);
		angka1 += ganjil;
		angka2 += 13;
		ganjil -= 3;
		i++;
	}while(i<5);
	return 0;
}
