#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calcular_maximum_bitwise(int v1, int v2) {
	int maior, r1, r2, r3, r4, r5; 
	//operações
	r1 = v1 & v2;
	r2 = v1 | v2;
	r3 = v1 ^ v2;
	r4 = v1 << v2;
	r5 = v1 >> v2;
	//comparação
	maior = r1;
	if(r2 > maior){
		maior = r2;
		if(r3 > maior){
			maior = r3;
			if(r4 > maior){
				maior = r4;
				if(r5 > maior){
					maior = r4;
				}
			}
		}
	}
	return maior;
}
int main() {
 int valor_1, valor_2, maior_valor;
 printf("Informe os valores.\n");
 scanf("%d %d", &valor_1, &valor_2);
 maior_valor = calcular_maximum_bitwise(valor_1, valor_2);

 printf("O maior valor e: %d .\n", maior_valor);

 return 0;
}

//fim
