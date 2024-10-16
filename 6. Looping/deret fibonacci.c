//menampilkan deret fibonacci  1 2 3 5 8 13 ...
#include <stdio.h>
int main(){
	int angka1 = 1;
	int angka2 = 2;
	int angkaNext;
	printf("%d %d ",angka1,angka2);
	int i=0;
	while(i < 10){
		angkaNext = angka1 + angka2;
		angka1 = angka2;
		angka2 = angkaNext;
		printf("%d ",angkaNext);
		
		i++;
		
	}
	return 0;
}
