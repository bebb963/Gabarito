#include <stdio.h>

int main (){
int n, alternativas[5], i=0;

	do{
		i=0;
		scanf("%d",&n);
		if((n<0)||(n>20)){
			for(i; i<n; i++){
					scanf("%d %d %d %d %d", &alternativas[0],&alternativas[1],&alternativas[2],&alternativas[3],&alternativas[4]);
				}
			printf("Numero de questoes fora dos limites permitidos!\n");
		    break;
		}
		else{
			while(i<n){	
				for(i; i<n; i++){
					scanf("%d %d %d %d %d", &alternativas[0],&alternativas[1],&alternativas[2],&alternativas[3],&alternativas[4]);
					if((alternativas[0]<=127)&&(alternativas[1]>127)&&(alternativas[2]>127)&&(alternativas[3]>127)&&(alternativas[4]>127))
						printf("A\n");
					else if((alternativas[1]<=127)&&(alternativas[0]>127)&&(alternativas[2]>127)&&(alternativas[3]>127)&&(alternativas[4]>127))
						printf("B\n");
					else if((alternativas[2]<=127)&&(alternativas[0]>127)&&(alternativas[1]>127)&&(alternativas[3]>127)&&(alternativas[4]>127))
						printf("C\n");
					else if((alternativas[3]<=127)&&(alternativas[0]>127)&&(alternativas[1]>127)&&(alternativas[2]>127)&&(alternativas[4]>127))
						printf("D\n");
					else if((alternativas[4]<=127)&&(alternativas[0]>127)&&(alternativas[1]>127)&&(alternativas[2]>127)&&(alternativas[3]>127))
						printf("E\n");
					else
						printf("*\n");
				}
			}
		}
	}while(n!=0||n>20);
}