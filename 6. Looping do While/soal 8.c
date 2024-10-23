#include <stdio.h>
#include <math.h>
int main(){
	int angka = 6;
	int i=0;
	int kurang=0;
	do{
		printf("%d ",angka-kurang);
		kurang++;
		i++;
		if(i%4==0){
			kurang = 0;
			angka += 1;
		}
		
	}while(i<10);
	return 0;
}
