#include <stdio.h>
#include <math.h>
int main(){
	int angka1 = 1;
	int angka2 = 5;
	int i=0;
	do{
		printf("%d %d ",angka1, angka2);
		angka1 += 2;
		angka2 *=2; 
		i++;
	}while(i<5);
	return 0;
}
