#include <stdio.h>

int binary_search(int *vet, int chave, int inicio, int fim)
{
	int meio;
	if(inicio <= fim)
	{
		meio = (inicio + fim)/2;
		if(chave == vet[meio])
			return meio;
		else{
			if(chave < vet[meio])
				return binary_search(vet, chave, inicio, meio - 1);
			else
				return binary_search(vet, chave, meio + 1, fim);
		}
	}
	return -1;
}
