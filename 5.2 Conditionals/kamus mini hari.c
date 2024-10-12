/*
	kamus mini hari
*/
#include <stdio.h>
int main()
{
	//var
	char hari[] = "selasa";
	
	//input
	
	
	//output
	if(strcmp(hari,"senin")==0){
		printf("monday");
	}else if(strcmp(hari,"selasa")==0){
		printf("Tuesday");
	}else if(strcmp(hari,"rabu")==0){
		printf("Wednesday");
	}else if(strcmp(hari,"kamis")==0){
		printf("Thursday");
	}else if(strcmp(hari,"jumat")==0){
		printf("Friday");
	}else if(strcmp(hari,"sabtu")==0){
		printf("Saturday");
	}else if(strcmp(hari,"ahad")==0){
		printf("Sunday");
	}else{
		printf("input error, harus nama hari dengan huruf kecil");
	}
	
	return 0;
}
