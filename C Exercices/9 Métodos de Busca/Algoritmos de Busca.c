#include<stdio.h>
#include<locale.h>

/*
Faça um programa em C que crie um vetor com 10
números inteiros. Em seguida, o programa deverá
solicitar um valor do usuário a ser buscado 
no vetor e verificar se o mesmo pertence ou
não ao vetor, imprimindo a mensagem ao usuário. O
programa deverá implementar duas funções de busca
no vetor: sequencial e binária. Para realizar a busca
binária, você deverá criar o seu próprio algoritmo de
ordenação.
Obs: compare o número de comparações realizadas por
cada estratégia para encontrar o elemento procurado
*/

int escolhaDoVetor() {
	int op;
	while (op != 1 && op != 2 && op != 3)	 {
		printf("Escolha um dos vetores a seguir: \n");
		printf("1. Ordenado crescente: vetor = [2, 3, 4, 5, 6, 7, 8 ,9 ,10, 11]\n");
		printf("2. Ordenado descrescente: vetor = [11, 10, 9, 8, 7, 6, 5, 4, 3, 2]\n");
		printf("3. Não Ordenado: vetor = [5, 2, 3, 4, 10, 8, 7 ,6, 11, 9]\n");
		printf("Entre com a opção: ");
		scanf("%d", &op);
		
		if (op != 1 && op != 2 && op != 3) {
			printf("\nOpção inválida!\n\n");
		}
	}
	if (op == 1){
	return 1;
	}
	else if (op == 2) {
		return 2;
	}
	else if (op == 3) {
		return 3;
	}
}

int metodoDeBusca() {
	int op;
	while (op != 1 && op != 2 && op != 3)	 {
		printf("\nEscolha uma opçao para obter o resultado: \n");
		printf("1. Busca Sequencial\n");
		printf("2. Busca Binária recursiva\n");
		printf("3. Busca Binária iterativa\n");
		printf("Entre com a opção: ");
		scanf("%d", &op);
		
		if (op != 1 && op != 2 && op != 3) {
			printf("\nOpção inválida!\n\n");
		}
	}
	if (op == 1){
	return 1;
	}
	else if (op == 2) {
		return 2;
	}
	else if (op == 3){
		return 3;
	}
}

int buscaSequencial(int vetor[], int numBuscado, int *contadorComparacoes) {
	int i;
	for (i=0; i< 10; i++) {
		(*contadorComparacoes)++;
		if (numBuscado == vetor[i]) {
			return 1; // Retorna 1 quando o número é encontrado
		}
	}
	return -1; // Retorna -1 quando o número não é encontrado
}

int buscaBinariaRecursiva(int vetor[], int numBuscado, int inicioVetor, int finalVetor, int *contadorComparacoes, int decrescente) {
	int meio;
	meio = (inicioVetor + finalVetor) / 2;
	
	(*contadorComparacoes)++;
	if (decrescente == 0) {
		if (numBuscado == vetor[meio]) {
			return 1; // Retorna 1 quando o número é encontrado
		}
		else if (numBuscado > vetor[meio]) {
			return buscaBinariaRecursiva(vetor, numBuscado, meio+1, finalVetor, contadorComparacoes, decrescente);
		}
		else {
			return buscaBinariaRecursiva(vetor, numBuscado, inicioVetor, meio-1, contadorComparacoes, decrescente);
		}
	}
	else {
		if (numBuscado == vetor[meio]) {
			return 1; // Retorna 1 quando o número é encontrado
		}
		else if (numBuscado < vetor[meio]) {
			return buscaBinariaRecursiva(vetor, numBuscado, meio+1, finalVetor, contadorComparacoes, decrescente); // Ajuste para vetor decrescente
		}
		else {
			return buscaBinariaRecursiva(vetor, numBuscado, inicioVetor, meio-1, contadorComparacoes, decrescente); // Ajuste para vetor decrescente
		}
	}
	return -1; // Retorna -1 quando o número não é encontrado
}


int buscaBinariaIterativa(int vetor[], int numBuscado, int inicioVetor, int finalVetor, int *contadorComparacoes, int decrescente) {
	int i, meio;
	
	for (i=0; i<10; i++) {
		meio = (inicioVetor + finalVetor) / 2;
		(*contadorComparacoes)++;
		
		if (decrescente == 0) {
			if (numBuscado == vetor[meio]) {
			return 1; // Retorna 1 quando o número é encontrado
			}
			else if (numBuscado > vetor[meio]) {
				inicioVetor = meio+1;
			}
			else {
				finalVetor = meio-1;
			}
		}
		else {
			if (numBuscado == vetor[meio]) {
            return 1; // Retorna 1 quando o número é encontrado
	        }
	        else if (numBuscado > vetor[meio]) {
	            finalVetor = meio - 1; // Ajuste para vetor decrescente
	        }
	        else {
	            inicioVetor = meio + 1; // Ajuste para vetor decrescente
	        }
		}
	}
	return -1; // Retorna -1 quando o número não é encontrado
}


main () {
	setlocale(LC_ALL, "Portuguese");
	int vetorEscolhido, i, numBuscado, contadorComparacoes = 0;
	int inicioVetor = 0, finalVetor = 9, resultado, opcao = 0;
	
	vetorEscolhido = escolhaDoVetor();
	int vetor[10], decrescente = 0;
	
	 if (vetorEscolhido == 1) {
        int temp[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        for (i = 0; i < 10; i++) {
            vetor[i] = temp[i];
        }
    }
    else if (vetorEscolhido == 2) {
        int temp[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
        for (i = 0; i < 10; i++) {
            vetor[i] = temp[i];
            decrescente = 1;
        }
    }
    else {
        int temp[] = {5, 2, 3, 4, 10, 8, 7, 6, 11, 9};
        for (i = 0; i < 10; i++) {
            vetor[i] = temp[i];
        }
    }
	
	printf("\nDigite um número para buscar no vetor: ");
	scanf("%d", &numBuscado);
	
	opcao = metodoDeBusca();
	
	printf("\n");
	if (opcao == 1) {
		resultado = buscaSequencial(vetor, numBuscado, &contadorComparacoes);
		if (resultado == -1) {
			printf("Este número não está presente no vetor!");
		}
		else {
			printf("Este número está presente no vetor!\n");
			printf("Foram necessárias %d comparações", contadorComparacoes);
		}
	}
	else if (opcao == 2) {
		resultado = buscaBinariaRecursiva(vetor, numBuscado, inicioVetor, finalVetor, &contadorComparacoes, decrescente);
		if (resultado == -1) {
			printf("Este número não está presente no vetor!");
		}
		else {
			printf("Este número está presente no vetor!\n");
			printf("Foram necessárias %d comparações", contadorComparacoes);
		}
	}
	else {
		resultado = buscaBinariaIterativa(vetor, numBuscado, inicioVetor, finalVetor, &contadorComparacoes, decrescente);
		if (resultado == -1) {
			printf("Este número não está presente no vetor!");
		}
		else {
			printf("Este número está presente no vetor!\n");
			printf("Foram necessárias %d comparações", contadorComparacoes);
		}
	}
}
