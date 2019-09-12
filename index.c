#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	
				setlocale(LC_ALL,"Portuguese");
				int menu;
				int num;
				int rest;
				int nota1;
				int nota2;
				int nota3;
				int media;
				char nome [15];
				int matricula;
				int b;
			    float a, c;
	
				printf("Digite de 1 a 9 para navegar e 0 para sair!\n");
				scanf("%d", &menu);
	
	while(menu<0);
	
		switch(menu){
				
			case 1:
				
				printf("DESCUBRA SE O NUMERO E PAR OU IMPAR\n\n");
				
				printf("digite um número !!! \n");
				scanf("%d", &num);
				rest = num % 2;
				
				if (rest == 0){
				
				printf("esse número %d é par\n", num);
			
				}
				else{
					
				printf("esse número %d é ímpar\n", num);
				
				}
				
			break;
			
			case 2:
				
				printf("CALCULADORA DE POTÊNCIA \n");
				
				printf("digite seu primeiro número\n");
				scanf("%f", &a);
				
				printf("digite seu segundo número\n");
				scanf("%d", &b);
				
				c = pow(a, b);
				printf("a potência do número é: %e\n", c);
				
			break;
			
			case 3:
			
				printf("DESCUBRA A RAIZ DO NÚMERO.\n");
				
				printf("Digite seu primeiro número\n");
				scanf("%f", &a);
				
				printf("Digite seu segundo número\n");
				scanf("%d", &b);
				
				c = sqrt(a);
				c = c / b;
				
				printf("%f",c);
				printf("%e\n",c);
				
			break;
			
			case 4:
				
				printf("CÁLCULO DO ANO BISSEXTO. \n");
	
				printf("digite um ano\n");
				scanf("%d", &num);
	
				if(num % 4 == 0 && num % 100 != 0 || num % 400 == 0)
				{
					
				printf("o ano é bissexto");
				
				}else{
					
				printf("o ano não é bissexto");
				
				}
				
			break;
			
			case 5:
				
				printf("CÁLCULO DA MÉDIA PONDERADA.\n");
				
				printf("digite sua primeira nota\n");
				scanf("%d", &nota1);
	
				printf("digite sua segunda nota\n");
				scanf("%d", &nota2);
	
				printf("digite sua terceira nota\n");
				scanf("%d", &nota3);
	
				media = (nota1*1 + nota2*1 + nota3*2)/3;
				printf("sua nota foi : %d \n", media);
	
				if(media <=60 ){
		
				printf("você foi aprovado");
		 
				}else {
		
				printf("você não foi aprovado/n");
		
				}
				
			break;
			
			case 6:
				
				printf("CÁLCULO DA MÉDIA \n");
				
				printf("digite sua primeira nota\n");
				scanf("%d", &nota1);
				
				printf("digite sua segunda nota\n");
				scanf("%d", &nota2);
				
				media = (nota1 + nota2)/2;
				
				printf("sua média foi %d", media);
		
			break;
			
			case 7:
				
				printf("IMPRESSÃO DE NOME E MATRÍCULA. \n");
				
				printf("digite seu nome\n\n");
				scanf("%s", &nome);
				
				printf("digite sua matricula\n");
				scanf("%i", &matricula);
				
				printf("nome: %s\n\n", nome);
				printf("matrícula: %x\n", matricula);
				
			break;
			
			default: 
			
				printf("opção inexistente.");
			
		}
	
}
