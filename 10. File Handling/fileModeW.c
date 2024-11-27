#include <stdio.h>
int main(){
	FILE *file;
	double saldo = 100000;
	//buat file baru(file notepad kosong) dengan mode w
	file = fopen("file1.txt","w");
	
	//menambah huruf ke file
	fputc('A',file);
	
	//menambah string ke file
	fputs("\nbelajar file handling\n", file);
	
	//menambah data ke file
	fprintf(file,"\n%.lf",saldo);
	
	//tutup file
	fclose(file);

	return 0;
}



