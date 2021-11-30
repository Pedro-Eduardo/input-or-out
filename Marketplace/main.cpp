#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*fun��es referentes a op��o 1 -  Auto atendimento 

	1 - Comprar
	2 - Criar compra recorrente
	3 - Est�tisca de Compras
*/

/*fun��es referentes a op��o 2 - Saldo do cart�o
	
	fun��o geral ao abri o menu solicita que passe o cart�o e pede a senha de 6 digitos do cart�o. Se ele acerta ele entra 
	se ele errar 3 vezes bloqueia e manda ir na agencia resetar. 
*/
char ValidarSenha(char card, int senha){
	char cardF = card;
	int senhaF = senha;
	int status_login;
				
	system("cls");
	printf("N�mero do cart�o:  %s \n", &cardF);
	printf("Senha do cart�o:  %d \n", senhaF);
	return(status_login);

}
/*	
	1 - Pagar fatura com saldo em conta
	2 - Solicitar Limite
*/

/*fun��es referentes a op��o 3 -  Cupom de sorteio do menu principal 
	
	1 - Trocar por cashback
	2 - Trocar por desconto
	3 - trocar por participar em sorteio
	4 - extrato
*/

void  menu(){
	
		//idiomar Portugues
	setlocale(LC_ALL, "Portuguese");
	// Sauda��o de bem vindo ao sistema 
	printf("Welcome to Marketplace \n\n");
	
	// op��es do sistema abaixo do mercadinho:  Auto atendimento, Saldo do cart�o co-brand, Cupom de sorteio
	int opcao;
	
	printf("1 - Auto atendimento \n");
	printf("2 - Saldo do cart�o  \n");
	printf("3 - Cupom de sorteio \n \n");
	printf("Digite o n�mero da op��o acima:  ");
	
	scanf("%d", &opcao);
	
	//op��es do Auto atendimento, Saldo do cart�o co-brand, Cupom de sorteio
	switch(opcao){
		
		case 1://Incio da fun��o 1 Auto atendimento
			//limpar a op��o anterior e mostrar a nova op��o
			system("cls");
			printf("       Menu: Auto atendimento \n\n");

			printf("1 - Comprar \n");
			printf("2 - Criar compra recorrente \n");
			printf("3 - Est�tisca de Compras \n");
			printf("4 - Menu Princinpal \n \n");
			printf("Digite o n�mero da op��o acima:  ");
			
			int opcaoAT; // variavel do submenu da op��o 1  do menu principal
			scanf("%d", &opcaoAT); //Entrada do usurio
			
			switch(opcaoAT){
				case 1: // inicio da funcao 1 - comprar
				break; // fim da funcao 1 - comprar
				case 2://inicio da fun��o 2 - Criar compra recorrente
				break; //fim da fun��o 2 - Criar compra recorrente
				case 3: // inicio da fun��o 3- Est�tisca de compras
				break; // fim da fun��o 3- Est�tisca de compras
				case 4: // inicio da op��o 4 -menu principal
					system("cls");
					menu(); 
				break; // fim da op��o 4 - menu principal 
				default: // digitou o valor errado
					printf("opc�o invalida");
				
			}//fim  da fun��o 1 Auto atendimento
			
		break; //Fim da fun��o 1 Auto atendimento
		case 2: //incio da fun��o 2 Saldo do cart�o
			//limpar a op��o anterior e mostrar a nova op��o
			system("cls");
			printf("       Menu: Saldo do cart�o \n\n");
			//Saldo do cart�o em 3 parte : Credito no Mercado, Compra fora , Fatura aberta, Saldo utilizado.
			
			char card;
			int senha;
			int status_login;
			
			printf("Passe seu cart�o no leitor: ");
			scanf("%s", &card);
			printf("Obrigado! \n");
			printf("Digite sua senha: ");
			scanf("%d", &senha);
			
			//pegar o id do cart�o  enviar ele
			
			printf("Validando ...");
			
			
			status_login = ValidarSenha(card, senha);
					
			printf("1 - Pagar fatura com saldo em conta \n");
			printf("2 - Solicitar Limite \n");
			printf("3 - Menu Princinpal \n\n");
			printf("Digite o n�mero da op��o acima:  ");
			
			int opcaoCartao;
			scanf("%d", &opcaoCartao);
			
			switch (opcaoCartao){ //inicio do menu fun��o 2 Saldo do cart�o
				case 1 : //inicio da fun��o 1 - Pagar fatura com saldo em conta
				break; //fim da fun��o 1 - Pagar fatura com saldo em conta
				case 2: //inicio da fun��o  2 - Solicitar Limite 
				break;//fim da fun��o  2 - Solicitar Limite
				case 3://inicio da fun��o  2 - Solicitar Limite 3 - Menu Principal
					// limpar a tela e chamar fun��o voltar para menu principal ir ao menu principal.
					system("cls");
					menu();
				break;//fim da fun��o  2 - Solicitar Limite 3 - Menu Principal
				default:
					printf("Op��o invalida!");				
			}	//fim do menu fun��o 2 Saldo do cart�o
		break;  //Fim da fun��o 2 Saldo do cart�o
		case 3: //Incio da fun��o 3 cupom de sorteio
				//limpar a op��o anterior e mostrar a nova op��o
				system("cls");
				printf("       Menu: Cupom de sorteio \n\n");
				//Fun��o quantidade de cupom de acordo com os gastos de 50 reais equivale a 1 cupom 
				printf("1 - Trocar por cashback \n");
				printf("2 - Trocar por desconto \n");
				printf("3 - Trocar por participar em sorteio \n");
				printf("4 - Extrato \n");
				printf("5 - Menu Princinpal \n\n");
				printf("Digite o n�mero da op��o acima:  ");
				
				int opcaoSorteio;
				scanf("%d", &opcaoSorteio);
				switch(opcaoSorteio){
					case 1: //Incio da fun��o 1 - trocar por cashback
						// 1 - Trocar por cashback
						// fun��o que vai permitir meu de acordo com o saldo de comprar eu trocar por cashback e cair direto na conta do banco ou cr�dito no mercado			
					break; //Fim da fun��o 1 - trocar por cashback
					case 2://Incio da fun��o  2 - trocar por desconto
						// 2 - Trocar por desconto
						// calcular o valor de compras e cada 50 reais troco por desconto de 1% da compra somatario com outros saldo anteriores e extrato.
					break; //Fim da fun��o  2 - trocar por desconto
					case 3://Incio da fun��o 3 - trocar por participar em sorteio
						// 3 - Trocar por participar em sorteio
						// dividir o saldo de compra por 50 e arredondar por multiplos de 50 reais.
					break; //Fim da fun��o 3 - trocar por participar em sorteio
					case 4: //Incio da fun��o 4 - extrato
						// 4 - Extrato
						/* mostrar os extratos de compras e de trocas( troca por cashback, desconto, cupom saldo e atual de todos(compras feitas, compras trocadas
						saldo de cashback, saldo desconto, saldo de cupons n�o participado de sorteio e saldos de cupons trocado para participar no sorteio)) 
						*/
					break; //Fim da fun��o 4 - extrato
					case 5: //Incio da fun��o 5 -menu principal
						// 5 - Menu Princinpal 
						// limpar a tela e chamar fun��o voltar para menu pricipal ir ao menu pricipal.
						
						system("cls");
						menu();
					break; //Fim da fun��o 5 -menu principal
					
					default:
					printf("Op��o invalida!");
				}
		break;  //Fim da fun��o 3 cupom de sorteio		
		default:
			printf("Op��o invalida!");
		}
	
}


int main (){
	menu();
	return 0;
}

