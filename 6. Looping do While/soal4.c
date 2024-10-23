#include <stdio.h>
#include <math.h>
int main(){
	int angka1 = 0;
	int angka2 = 2;
	int temp;
	int i=0;
	do{
		printf("%d ",angka2);
		temp = angka1;
		angka1 = angka2;
		angka2 += temp;
		i++;
	}while(i<10);
	return 0;
}
