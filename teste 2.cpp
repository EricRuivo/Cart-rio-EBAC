#include <stdio.h> //bbteca comunica��o user
#include <stdlib.h> //bbtecade aloca��o de espa�o de memoria
#include <locale.h> // bbtetexto regi�o
#include <string.h> // bbtetexto p/ cuidar das strings


int Registro()//Fun��o registro de nomes
{
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s",cpf);
	
	strcpy(arquivo,cpf); // copiar os valores das string
	
	FILE *file;//cria o arquivo
	file = fopen(arquivo, "w");//cria o arquivo
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
		printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
		printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
}

int Consulta()//Fun��o consulta de nomes
{
	
	setlocale (LC_ALL, "Portuguese");
	char cpf [40];
	char arquivo [40];
	char conteudo [2000];
	
	printf("Digite o CPF a ser caconsultado:  ");
	scanf("%s",cpf);
	
	FILE*file;
	file = fopen (cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado");
	}
	
	while(fgets(conteudo, 2000, file) != NULL);
	{
		printf("\nEssas s�o as infroma��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system ("pause");
	
	
}

int Delete()//Fun��o deletar de nomes
{
	char cpf [40];
	char arquivo [40];
	char conteudo [2000];
	
	printf("Digite o CPF a ser deletado:  ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE*file;
	file = fopen (cpf,"r");
	
	if(file == NULL)
	{
		printf("\nN�o foi possivel abrir o arquivo, n�o localizado\n");
	}
	
	system ("pause");
}


int main ()
{
	int opcao=0; //Definido variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system ("cls");
		
		setlocale(LC_ALL, "Portuguese"); //Inicio do menu
	
	printf("\t Cart�rio da EBAC  \n\n");
	printf("Escolha a op��o desejada do menu\n\n");
	printf("\t1 - Registrar nomes\n\t2 - Consultar nomes\n\t3 - Deletar   nomes\n");
	printf("Op��o:");//Final do menu
	//Inicio da sele��o
	scanf("%d", &opcao);
	
	system ("cls");
	
	switch(opcao)
	{
		case 1:
		Registro();
		break;
		
		case 2:
		Consulta();
		break;	
		
		case 3:
	
		Delete();
		break;	
			
		default:
		printf("\t Escolher op��o valida\n\n");
		system("pause");
		break;
	}
	

	}


	//Fim da sele��o
}

