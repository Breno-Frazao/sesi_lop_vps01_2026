#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	char pedido, tipo;
	int senha = 0;
	do{
	 printf("Possui pedido de exame? s/n:");
	 scanf("%c", &pedido);
	 if(pedido == 's'){
	 	 senha++;
	 	 printf("Sua senha é %d\n", senha);
	 	 printf("Qual o tipo de exame??\n");
	 	 printf("a = adimisssional\n");
	 	 printf("d = demissional\n");
	 	 printf("p = periodico\n");
	 	 printf("o = outro\n");
	 	 scanf("%c", &tipo);
	 	 if(tipo == 'a') printf("Encaminhe-se a sala 01\n");
	 	 else if(tipo == 'd') printf("Encaminhe-se a sala 02\n");
	 	 else if(tipo == 'p') printf("Encaminhe-se a sala 03\n");
	 	 }else printf("Encaminhe-se a sala 04\n");	 
	  }

