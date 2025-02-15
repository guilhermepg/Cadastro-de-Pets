#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "tela.h"

struct no{
	char nome[12];
	char especie[20];
	char raca[10];
	char sexo;
	int idade;
	struct no *proximo;
};

void novoPet(struct no *lista,char n,char e, char r, char s, int i){
	struct no *novoNo;
	novoNo = (struct no*) malloc(sizeof(struct no));
	strcpy( novoNo->nome, n );
	strcpy( novoNo->especie, e );
	strcpy( novoNo->raca, r );
	strcpy( novoNo->sexo, s );
	novoNo->idade = i;
	novoNo->proximo = (struct no*)NULL;
	
	while (lista->proximo != NULL){
		lista = lista->proximo;
	}
	lista->proximo = novoNo;
}

void listar(struct no* lista){
	while(lista!=NULL){
		printf("\n%d\t%d\t%d\t%d\t%d\t%d",lista->nome,lista->especie,lista->raca,lista->sexo,lista->idade);
		lista = lista->proximo;
	}
}

void abertura(){
	printf("**********************\n");
	printf("***Cadastro de Pets***\n");
	printf("**********************\n\n");
}

void opcoes(){
	textcolor(AMARELO);
	printf("\nBem Vindo ao Cadastro de Pets!!!\nSelecione qual tarefa deseja realizar:\n\n");
	textcolor(AZUL_ESCURO);
	printf("Inclusao de um novo Pet: [1]\n");
	textcolor(VERMELHO_ESCURO);
	printf("Remocao de um Pet: [2]\n");
	textcolor(AZUL_ESCURO);
	printf("Alteracao de informacao: [3]\n");
	printf("Busca de um Pet pelo seu nome: [4]\n");
	printf("Busca de um Pet por especie: [5]\n");
	printf("Busca de um Pet por especie e raca: [6]\n");
	printf("Busca de um Pet por especie, raca e sexo: [7]\n");
	printf("Mostrar a quantidade de Pets cadastrados: [8]\n");
	printf("Mostrar a quantidade de Pets de X especie: [9]\n");
	printf("Listagem de todos os Pets cadastrados: [10]\n");
	printf("Sair do Cadastro: [11]\n\n");
	printf("Digite uma opcao: ");
	textcolor(BRANCO);
}

int main(){
		
	struct no *primeiroNo;
	primeiroNo = NULL;
	
		int opcao;
		char n[12];
		char e[20];
		char r[10];
		char s; 
		int i;
		
	abertura();
	while(opcao != 11){
		
		opcoes();
		
		scanf("%d",&opcao);
		switch ( opcao )
		{
			case 1:
					textcolor(AZUL_ESCURO);
				printf("\nInsira o nome do Pet: ");
					textcolor(BRANCO);
				scanf("%s",&n);
					textcolor(AZUL_ESCURO);
				printf("\nInsira a especie do(a) %s: ",n);
					textcolor(BRANCO);
				scanf("%s",&e);
					textcolor(AZUL_ESCURO);
				printf("\nInsira a raca do(a) %s [ M / F ]: ",n);
					textcolor(BRANCO);
				scanf("%s",&r);
					textcolor(AZUL_ESCURO);
				printf("\nInsira o sexo do(a) %s: ",n);
					textcolor(BRANCO);
				scanf("%s",&s);
					textcolor(AZUL_ESCURO);
				printf("\nInsira a idade do(a) %s: ",n);
					textcolor(BRANCO);
				scanf("%d",&i);
				
				novoPet(primeiroNo,n,e,r,s,i);
				fflush(stdin);
				opcao = NULL;
				printf("\n\n");
				break;
				
			case 2:
				opcao = NULL;
				break;
				
			case 3:
				opcao = NULL;
				break;
				
			case 4:
				opcao = NULL;
				break;
				
			case 5:
				opcao = NULL;
				break;
				
			case 6:
				opcao = NULL;
				break;
				
			case 7:
				opcao = NULL;
				break;
				
			case 8:
				opcao = NULL;
				break;
				
			case 9:
				opcao = NULL;
				break;
				
			case 10:
				printf("\n\nLISTA DOS PETS CADASTRADOS");
				printf("\nNome\tEspecie\tRaca\tSexo\tIdade\n");
				listar(primeiroNo);
				opcao = NULL;
				break;
				
			case 11:
				break;
				
			default :
				printf("\nOPCAO INVALIDA!!! Escolher outra\n\n");
		}
	}
	
	printf("\nFim do Cadastro de pet\n");

	return 0;
}
