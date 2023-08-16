#include<stdio.h>

int main(){
	//variaeveis
	char nome [50];
	int idade;
	char matricula[19];
	char endereco [40];
	char curso [50];
	int periodo;
	char diciplinas[100];
	float mensalidade;
	
	//entrada de dados
	printf("digite o nome:\n");
	fgets(nome,50,stdin);
	
	printf("digite sua idade:\n");
	scanf("%d", &idade);
	fflush(stdin);
	
	printf("digite sua matricula:\n");
	fgets(matricula,19,stdin);
	
	printf("digite seu endereco:\n");
	fgets(endereco,40,stdin);
	
	printf("digite seu curso:\n");
	fgets(curso,50,stdin);
	
	printf("digite seu periodo:\n");
	scanf("%d", &periodo);
	
	fflush(stdin);
	printf("digite sua diciplina:\n");
	fgets(diciplinas,100,stdin);
	fflush(stdin);
	
	printf("digite sua mensalidade:\n");
	scanf("%f", &mensalidade);
	
	printf("seu nome e %s",nome);
	printf("sua idade e %d", idade);
	printf("sua matricula e %s", matricula);
	printf("seu endereco e %s", endereco);
	printf("seu curso e %s", curso);
	printf("seu periodo e %d", periodo);
	printf("sua diciplina e %s", diciplinas);
	printf("sua mensalidade e %.2f", mensalidade);
	
	
	
	
}
