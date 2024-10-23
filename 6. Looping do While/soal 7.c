#include <stdio.h>
#include <math.h>
int main(){
	int angka1 = 1;
	int angka2 = 42;
	int angka3 = 72;
	int i=0;
	do{
		 printf("%d %d %d ",angka1, angka2, angka3);
		 angka1+=1;
		 angka2-=6;
		 angka3/=2;
		 i++;
		
	}while(i<10);
	return 0;
}
