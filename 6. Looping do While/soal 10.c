#include <stdio.h>
#include <math.h>
int main(){
	int angka1 = 8;
	int angka2 = 1;
	int i=0;
	int ganjil = 3;
	do{
		printf("%d %d ",angka1, angka2);
		angka1 += 3;
		angka2 += ganjil;
		ganjil += 2;
		i++;
	}while(i<5);
	return 0;
}
