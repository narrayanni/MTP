<<<<<<< HEAD
#include <string.h>
#include <stdio.h>
int main (){
	FILE * kpop;
	char nomearq[32];
	printf("Informe o nome do arquivo:\n");
	fgets(nomearq,32, stdin);
	nomearq[strlen(nomearq)-1]='\0';
	kpop=fopen(nomearq, "r");
	char c;
	while(1){
		fscanf(kpop, "%c", &c);
		if(c=='i' ) // não sei como identificar EOF
			break;
		printf("%c", c);
		
	}
	fclose(kpop);
return 0;
}
=======
#include <string.h>
#include <stdio.h>
int main (){
	FILE * kpop;
	char nomearq[32];
	printf("Informe o nome do arquivo:\n");
	fgets(nomearq,32, stdin);
	nomearq[strlen(nomearq)-1]='\0';
	kpop=fopen(nomearq, "r");
	char c;
	while(1){
		fscanf(kpop, "%c", &c);
		if(c=='i' ) // não sei como identificar EOF
			break;
		printf("%c", c);
		
	}
	fclose(kpop);
return 0;
}
>>>>>>> ba27b389aefb5fe736b943d7c7ff8179d5d4ccad
