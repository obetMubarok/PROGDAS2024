#include <stdio.h>
int main(){
	int nilai[] = {5,0,20,0,0,50,60,30,0,0};
	
	//1.tampilkan data 70 ke layar
	printf("%d\n",nilai[7]);
	//2. tampilkan data yang berada di index ke-4
	printf("%d\n",nilai[4]);
	//3. ubah data pada index ke-5 dengan 100
	// selanjutnya tampilkan ke layar
	nilai[5] = 100;
	printf("%d\n",nilai[5]);
	//4. tampilkan seluruh data array, gunakan loop for
	int i;
	for(i=0; i<10 ; i++){
		printf("%d ",nilai[i]);
	}
	//5. tampilkan seluruh data secara terbalik
	printf("\n");
	for(i=9; i>-1; i--){
		printf("%d ", nilai[i]);
	}
	//6. tampilkan data semua array yg bukan 0
	printf("\n");
	for(i=0; i<10 ; i++){
		if(nilai[i] != 0)
			printf("%d ",nilai[i]);
	}
		
	//7. tampilkan data array yg nilai>50
	printf("\n");
	for(i=0; i<10; i++){
		if(nilai[i]>50)
			printf("%d ",nilai[i]);		
	}
	//8. buatlah proses pencarian 30
	//tampilkan hasil (ketemu /  tidak)
	char hasil[] = "tidak ketemu";
	for(i=0; i<10; i++){
		
		if(nilai[i] == 35){
			strcpy(hasil,"ketemu");
			break;
		}else{
			
		}
		
	}
	printf("%s", hasil);
	return 0;
}
