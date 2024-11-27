#include <stdio.h>
int main(){
	FILE *file;
	int nomer = 6;
	char nama[] = "Ibu";
	double saldo = 60000;
	//menggunakan mode a untuk menambah teks pada file lama/ baru
	file = fopen("file2.txt","a");
	
	//tulis
	fprintf(file,"\n%d %s %.lf",nomer, nama, saldo);
   		
	fclose(file);


	return 0;
}



