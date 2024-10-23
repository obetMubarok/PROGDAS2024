#include <stdio.h>
#include <math.h>
int main(){
	int angka1 = 1;
	int angka2 = 1;
	int i=1;
	do{
		printf("%d %d ",angka1, angka2);
		i++;
		angka1 = pow(i,2);
		angka2 = pow(i,3); 
		
	}while(i<=5);
	return 0;
}
