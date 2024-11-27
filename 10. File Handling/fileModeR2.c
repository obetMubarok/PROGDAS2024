#include <stdio.h>
int main(){
	FILE *file;
	char stringF[256];
	
	//menampilkan seluruh data
	file = fopen("file2.txt","r+");
	while(!feof(file)){
		fgets(stringF,256,file);
		printf("%s",stringF);
	}

	   		
	fclose(file);


	return 0;
}



