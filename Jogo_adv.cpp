#include <stdio.h>
#include<stdlib.h>
#include<time.h>
//--------------------------------Introdu��o da Linguagem das linguagens: Linguagem C I -----------------------------------------------------------------
// Nome: Matheus Moura Fernandes                                     IO : DEV C++
// Projeto: Jogo de advinha��o 
//-------------------------------------------------------------------------------------------------------------------------------------------------------
int main (){
//---------------------------------------------Cabe�alho-------------------------------------------------------------------------------------------------
printf("--------------------------------Introdu��o da Linguagem das linguagens: Linguagem C I ------------------------------\n");
printf("Nome: Matheus Moura Fernandes                                     IO : DEV C++                                                                         \n");
printf("Projeto: Jogo de advinha��o                                                                                                                            \n");
printf("--------------------------------------------------------------------------------------------------------------------\n");
printf("\n\n");
printf("          P  /_\\  P                                \n");
printf("         /_\\_|_|_/_\\                              \n");
printf("     n_n | ||. .|| | n_n         Bem vindo ao       \n");
printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinha��o!   \n");
printf("    |" "  |  |_|  |"  " |                           \n");
printf("    |_____| ' _ ' |_____|                           \n");
printf("          \\__|_|__/                                \n");
printf("\n\n");
//-----------------------------------Fazendo o numero secreto ficar aleatorio ---------------------------------------------------------------------------
int seg = time(0);// a fun��o times pega todos os segundos desde do ano de 1970 ate o segundo atual 
srand(seg);// a fun��o srand() utiliza como banco de dado os segundos pegados dessse perriodo 

int n1 = rand();// a fun��o rand pega aleatoriamente um numero desse dado 
//----------------------------------Defini��o de variaveis ---------------------------------------------------------------------------------------------
int num_sec=n1%100; // defini��o do numeros definedo pela adivinha��o, � utilizado % para pegar o resto da divi�o sendo assim limita o resto de 0 a cem 
//                       com isso o  numero secreto vai de 0 a 100
int chute ; // numero escolhido pelo jogaddor 
int ganhou=0;// inicia o ganhu se for direte de 0 o usu�rio ganhou 
int tent=0;// inicializa��o do numero de tentativas que conta 
int pontos=1000;
int pontos_perdidos;
int n_tenta ;
int nivel;
//-----------------------------------Comandos ---------------------------------------------------------------------------------------------------------
//---------------------------------Escolha de Nivel----------------------------------------------------------------------------------------------------
 printf("Escolha o n�vel de dificuldade do jogo.\n ");
 printf("(1)F�cil     (2)M�dio   (3) Dif�cil \n \n ");
 scanf("%d",& nivel);
switch(nivel){

 case 1:  n_tenta=20;
 break;
 case 2: n_tenta=15;
 break;
 default :
 	 n_tenta=6;
 	 break;
}
//------------------------------La�o de repeti��o for --------------------------------------------------------------------------------------------------
for ( int i =0; i<n_tenta;i++){//numero de tentativas do chute 3 -> Por for
//while (ganhou==0){// a diferen�a do whiele � 
printf("\n----------------------------Tentativa %d -------------------------------------------------------------\n", tent+1);
printf(" Escolha um numero :  ");
scanf("%d", & chute );// Leitura de variaveis 
printf("\n Seu chute foi: %d \n", chute );// impress�o da variavel lida 
if(chute < 0){
	printf(" N�o � permitido numeros negativos . \n");
	continue;
system("pause");
system("cls");	
}


//---------------------------------Condicionais-----------------------------------------------------------------------------------------------------------
if(chute==num_sec){
break;// se acertar o la�o de repeti��o for � anulado parado 
} else if ( chute > num_sec)  {
	printf (" O numero digitado � maior que o numero secreto . ");
	pontos_perdidos=  chute- num_sec;
	pontos= pontos- pontos_perdidos;
}else if (chute < num_sec){
	printf (" O numero � menor que o numero secreto . \n");
	pontos_perdidos= num_sec - chute;
	pontos= pontos- pontos_perdidos;
}
tent= tent+1;// 
system("pause");
system("cls");
}
if(chute==num_sec){
printf (" FIM DE JOGO \n");
printf(" Voce acertou na tentativa %d", tent+1);
printf(" Pontua��o %d", pontos);
}
else{
printf(" Voc� Perdeu !!\n\n");
}
//------------------------------Outra maneira de codicional --------------------------------------------------------------------------------------------------------------
/* As condicionais poser analisada antes da condicional atraves de variaveis 
acerto = chute==num_sec
if ( acerto){.....
}
maior= chute > num_sec
else if( maior){...
}
E por ai vai */ 
//--------------------------------------------------------------------------------------------------------------------------------------------
return 0;
					 }
