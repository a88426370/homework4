#include <stdio.h>
#include <string.h>
int main(void){
	FILE *file;
	char a[100];
	file = fopen("HW1.txt","w");
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			fprintf(file,"%dX%d=%d\n",i,j,i*j);		
		}
	}
	fclose(file);

	return 0;
}
