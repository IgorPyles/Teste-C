#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//função auxiliar para preencher nosso array de inteiros.
//arry_int sera preenchido com os valores inseridos
//max_elementos quantidade maxima de elementos que o array_int pode receber
//retorna a quantidade de elementos inteiros maiores que zero foram inseridos

int criar_array(int *array_int, int max_elementos){
 int idx = 0;
 char array_str[128];
 char valor[16];
 char *posicao_inicio = NULL;
 char *posicao_fim = NULL;

 printf ("Informe os valores do tipo inteiros, separados por virgula\n");
 scanf ("%s", array_str);
 if (strlen (array_str) > 0){
 posicao_inicio = array_str;
 do {
 posicao_fim = strchr (posicao_inicio, ',');
 memset(valor,0, sizeof(valor));
 if(posicao_fim != NULL) {
memcpy(valor, posicao_inicio,(int) (posicao_fim - posicao_inicio) );
posicao_inicio = (posicao_fim + 1 );
 }
 else if(posicao_inicio != NULL){
 memcpy(valor, posicao_inicio,(int) strlen(posicao_inicio) );
 }
 if(strlen(valor)) {
 array_int[idx++] = atoi(valor);
 }
 } while (posicao_fim != NULL && idx < max_elementos);
 }
printf ("ARRAY -> [" );
for(int i=0; i<idx; ++i){
 printf ("%d", array_int[i]);
 if(i+1 < idx){
 printf(",");
 }
}
 printf ("] \n");
 return idx;
}
//realiza a soma
int soma(int vr, int *array, int quantidade){
	int soma = 0;
	int cont = 0;
	for(int i = 0; soma <= vr; i++){
		soma = soma + array[i];
		cont = cont + 1;
	}
	return cont - 1;
}

int main(){
	int quantidade;
	printf("Insira a quantidade de elementos do array: ");
	scanf ("%d", &quantidade);
	int array[quantidade];
	int r = criar_array(array, quantidade);
	//ordenando o array
	int id = quantidade;
	for (int contador = 1; contador < id; contador++) {
   		for (int i = 0; i < id - 1; i++) {
     		if (array[i] > array[i + 1]) {
       			int aux = array[i];
       			array[i] = array[i + 1];
       			array[i + 1] = aux;
     		}
   		}
 	}
 	int vr;
	printf("Insira o valor re referencia: ");
	scanf ("%d", &vr);
	int resultado = soma(vr, array, quantidade);
	printf("%d", resultado);
	
}

//fim
