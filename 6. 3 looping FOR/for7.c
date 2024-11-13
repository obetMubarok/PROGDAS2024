#include <stdio.h> 
int main(){
	int i,j,k;
	for(i=0; i<4; i++){//4 baris
		for(j=0; j<i; j++){
			printf("  ");
		}
		for(k=4; k>i; k--){
			printf("* ");
		}
		printf("\n");
	}
	return 0;	
}





