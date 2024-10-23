#include <stdio.h>
#include <math.h>
int main(){
	int angka = 140;
	int i=0;
	do{
		printf("%d ",angka);
		if(i%2==0)
			angka += 5;
		else
			angka -= 3;
		i++;
	}while(i<10);
	return 0;
}
