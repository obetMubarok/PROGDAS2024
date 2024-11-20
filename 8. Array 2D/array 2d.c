#include <stdio.h>
int main(){
	int nilai[] = {1,2,3,4};
	int matriks[3][3] = {{5,6,7}, 
					     {1,2,3}, 
					     {7,9,8}};
	
	//tampilkan data 3
	printf("%d\n", matriks[1][2]);
	//tampilkan semua data pada baris ke-2
	int i;
	for(i=0; i<3; i++){
		printf("%d ", matriks[1][i]);
	}
	//tampilkan bilangan diagonal
	printf("\n");
	for(i=0; i<3; i++){
		printf("%d ", matriks[i][i]);
	}
	//tampilkan data L
	int j=0,k=1;
	printf("\n");
	for(i=0; i<5; i++){
		if(i<3){
			printf("%d ", matriks[j][0]);
			j++;
		}else{
			printf("%d ", matriks[2][k]);
			k++;
		}
	}
	
	//reset matriks, ubah 0 semua
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriks[i][j] = 0;
		}
	}
	
	//tampilkan  semua data
	printf("\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", matriks[i][j]);
		}
		printf("\n");
	}
	return 0;
}
