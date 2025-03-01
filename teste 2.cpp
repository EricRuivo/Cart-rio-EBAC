#include <stdio.h> //bbteca comunicação user
#include <stdlib.h> //bbtecade alocação de espaço de memoria
#include <locale.h> // bbtetexto região
#include <string.h> // bbtetexto p/ cuidar das strings


int Registro()//Função registro de nomes
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

int Consulta()//Função consulta de nomes
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
		printf("Não foi possivel abrir o arquivo, não localizado");
	}
	
	while(fgets(conteudo, 2000, file) != NULL);
	{
		printf("\nEssas são as infromações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system ("pause");
	
	
}

int Delete()//Função deletar de nomes
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
		printf("\nNão foi possivel abrir o arquivo, não localizado\n");
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
	
	printf("\t Cartório da EBAC  \n\n");
	printf("Escolha a opção desejada do menu\n\n");
	printf("\t1 - Registrar nomes\n\t2 - Consultar nomes\n\t3 - Deletar   nomes\n");
	printf("Opção:");//Final do menu
	//Inicio da seleção
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
		printf("\t Escolher opção valida\n\n");
		system("pause");
		break;
	}
	

	}


	//Fim da seleção
}

