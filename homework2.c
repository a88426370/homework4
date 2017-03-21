#include <stdio.h>
#include <string.h>
int main(void){
	char stringa[]="hello";
	char stringb[]="add";
	char stringc[]="length";
	char stringd[]="exit";
	char stringreg[10];
	char string_input[50];
	
	int a=0,b=0;
	
	while(1){
		printf("please enter key word(hello/add/length/exit):\n");
		scanf("%s",stringreg);

		if(strcmp(stringreg,stringa) == 0){
			printf("Enter your name(ex.Afu):");
			scanf("%s",string_input);
			printf("Hello %s\n",string_input);
			string_input[0]='\0';
		}else if(strcmp(stringreg,stringb) == 0){
			printf("Enter two number(ex.12 10):");
			scanf("%d %d",&a,&b);
			printf("%d + %d = %d\n",a,b,a+b);
		}else if(strcmp(stringreg,stringc) == 0){
			printf("Enter a word(happy):");
			scanf("%s",string_input);
			size_t length = strlen(string_input);
			string_input[0]='\0';
			printf("String length:%lu\n",length);
		}else if(strcmp(stringreg,stringd) == 0){
			return 0;
		}else {
			printf("Please Enter again\n");			
		}
		stringreg[0]='\0';
	}
		
	//return 0;
}
