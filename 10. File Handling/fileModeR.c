#include <stdio.h>
int main(){
	FILE *file;
	int  nomer;
	char nama[10];
	double saldo;
	
	
	//menampilkan seluruh data
	file = fopen("file2.txt","r");
	while (fscanf(file, "%d %s %lf", &nomer, &nama, &saldo) != EOF){
		printf ("%d %s %.lf\n", nomer,nama,saldo);
	}
	
	//menampikan data pada baris ke-3
	file = fopen("file2.txt","r");
	int i=1;
	while (fscanf(file, "%d %s %lf", &nomer, &nama, &saldo) != EOF){
		if(i==3)
			printf ("\n%d %s %.lf\n", nomer,nama,saldo);
		i++;
	}
	
	//menampikan data pada baris ke-3
	file = fopen("file2.txt","r");
	int hasil;
	while (fscanf(file, "%d %s %lf", &nomer, &nama, &saldo) != EOF){
		if(strcmp(nama,"Wawan")==0)
			printf ("\n%d %s %.lf\n", nomer,nama,saldo);
	}
   		
	fclose(file);


	return 0;
}



