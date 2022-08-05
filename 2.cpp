#include <stdio.h>
int calc_fatorial(int valor_ft, int valor_n){
	for(valor_ft = 1; valor_n > 1; valor_n = valor_n - 1)
  	{      
    	valor_ft = valor_ft * valor_n;
  	}
  	return valor_ft;
}
int main() {
 int v, vf = 0;
 scanf("%d", &v);
 printf("Valor fatorial de: [%d] é [%d]", v, calc_fatorial(vf, v));
 return 0;
}

//fim
