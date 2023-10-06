#include<stdio.h>
#include<locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	/*
	1) Explique a diferença entre: p++; (*p)++; *(p++);
	Resposta: 
	- p++ incrementa o ponteiro, passa a apontar para o proximo endereco
	- (*p)++ incrementa a variavel(conteudo) apontada pelo ponteiro
	- *(p++) primeiro incrementa o ponteiro alterando o endereço que ele aponta e depois acessa a variavel apontada pelo ponteiro
	
	2) O que quer dizer a instrução *(p+10);?
	Resposta:
	- aponta para posicao 10 a frente do ponteiro inicial e depois acessa o conteudo deste endereço 
	/
	
	3) 3.Considere o seguinte trecho de programa:
		int i=3, j=5;
		int *p, *q;
		p = &i;
		q = &j;
		
	Qual é o valor das seguintes expressões?
	Resposta:
	a) p == &i;
	- 1
	b) *p - *q
	- (3 - 5) = -2
	c) **&p
	- 3
	d) 3* - *p/(*q)+7
	3 * (- (3/5)+7)
	3 * (-0,6) + 7
	-1,8 + 7
	= 5,2
	
	4) Qual será a saída do programa a seguir supondo que i ocupa o endereço 4094 na memória?
	main() {
	int i=5, *p;
	p = &i;
	printf(“%x %d %d %d %d \n”, p,*p+2,**&p,3**p,**&p+4);
	}
	
	Resposta:
	4094 7 5 15 9
	
	5) Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?
	Respota:
	a) p = &i;
	- legal
	b) *q = &j;
	- ilegal
	c) p = &*&i;
	- legal
	d)i=(*&)j;
	- ilegal
	e) i = *&j;
	- legal
	f) i = *&*&j;
	- legal
	g) q = *p;
	- ilegal
	h)i=(*p)++ + *q
	- legal
	
	6) Quais serão as saídas do seguinte programa? (SLIDE)
	Resposta: 
	a) 20
	b) 29.0
	c) A
	d) r
	e) A
	f) r
	g) o
	h) 31
	i) 45
	j) 27
	l) 31
	m) 45
	n) 27
	
	7) Qual é o resultado do seguinte programa?
	#include <stdio.h>
	
	int main(){
	float vet[5] = {1.1,2.2,3.3,4.4,5.5}, float *f;
	int i;
	f = vet;
	
	printf("contador/valor/valor/endereco/endereco");
	for(i = 0 ; i <= 4 ; i++){
		printf("\ni = %d",i);                              Resposta: 1º i = 0
		printf(" vet[%d] = %.1f",i, vet[i]);			   Resposta: 1º vet[0] = 1.1
		printf(" *(f + %d) = %.1f",i, *(f+i));			   Resposta: 1º 1.1 = 1.1
		printf(" &vet[%d] = %X",i, &vet[i]);			   Resposta: 1º &1.1 = &1.1
		printf(" (f + %d) = %X",i, f+i);				   Resposta: 1º &vet[0] = &vet[0] + 0
	}
}

	8) Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor do terceiro elemento do vetor?
	a) *(pulo + 2) b) *(pulo + 4) c) pulo + 4 d) pulo + 2
	Resposta:
	- Apenas a
	
	9) Suponha a seguinte declaração: int mat[4], *p, x; Quais expressões são válidas? Justifique:
	a) p = mat + 1; b) p = mat++; c) p=++mat; d)x=(*mat)++;
	Resposta:
	a) válido mas o ponteiro aponta para um valor que é indeterminavel pois em mat não foi definido os valores dos indices
	b) não é válido pois tenta incrementar o ponteiro do vetor
	c) não é válido pois tenta pré-incrementar o ponteiro do vetor
	d) válido mas o valor é indeterminavel pois em mat não foi definido os valores dos indices
	
	10) O que fazem os seguintes programas?
	a)
	#include <stdio.h>
	main(){
		int vet[] = {4,9,13};
		int i;
		for(i=0;i<3;i++){
		printf("%d ",*(vet+i));
		}
	}
	Resposta: realiza um print dos valores de vet: 4 9 13
	
	b)
	#include <stdio.h>
	main(){
		int vet[] = {4,9,13};
		int i;
		for(i=0;i<3;i++){
		printf("%X ",vet+i);
		}
	}
	Resposta: realiza um print dos endereços de cada elemento de vet &vet[0] &vet[1] &vet[2]
	
	c)
	#include <stdio.h>
	main() {
		int vet[] = {4,9,12};
		int i,*ptr;
		ptr = vet;
		for(i = 0 ; i < 3 ; i++) {
		 printf("%d ",*ptr++);
		}
	}
	Resposta: 4, 9, 12
	
	d)
	#include <stdio.h>
	main(){
		int vet[] = {4,9,12};
		int i,*ptr;
		ptr = vet;
		for(i = 0 ; i < 3 ; i++) {
		 printf("%d ",(*ptr)++);
		}
	}
	Resposta: 5, 6, 7
	
	11) Qual a saída do programa a seguir?
	# include <stdio.h>
	main()
	{
		int t, i, M[3][4];
		for (t=0; t<3; ++t)
		for (i=0; i<4; ++i)
		M[t][i] = (t*4)+i+1;
		for (t=0; t<3; ++t)
		{
		for (i=0; i<4; ++i)
		printf ("%3d ", M[t][i]);
		printf ("\n");
		}
	}
	Resposta:
	Cria a Matriz
	1  2  3  4
	5  6  7  8
	9 10 11 12
	
	%3d - se o número inteiro tiver menos de 3 caracteres, espaços em branco serão adicionados à esquerda para preencher a largura mínima de 3 caracteres.
	Imprime a matriz adicionando os espaços necessários
	1  2  3  4
	5  6  7  8
	9 10 11 12
	
	12) Qual o valor de y no final do programa?
	main()
	{
		int y, *p, x;
		y = 0;
		p = &y;
		x = *p;
		x = 4;
		(*p)++;
		x;
		(*p) += x;
		printf ("y = %d\n", y);
	}
	Resposta: y = 5
	
	13) Reescreva o programa abaixo usando ponteiros para acessar cada posição da matriz.
	main ()
	{
		float matrix [50][50];
		int i,j;
		for (i=0;i<50;i++)
			for (j=0;j<50;j++)
				matrix[i][j]=0.0;
	}
	Resultado:
	int main ()
	{
		float matrix [50][50], *pmat = &matrix[0][0];
		int i; 
		for (i=0;i<2500;i++)
		*(pmat + i) = 0.0;
		return(0);
	}
	
	14) Diga quais expressões abaixo são válidas. Considere as declarações:
	int vetor[10];
	int *ponteiro;
	a) vetor = vetor + 2; 
	- não é válido, pois altera o ponteiro do vetor
	b) vetor++;
	- não é válido, pois altera o ponteiro do vetor
	c) vetor = ponteiro;
	- não é válido, pois altera o ponteiro do vetor
	d) ponteiro = vetor;
	- válido aponta para o elemento de indice 0 do vetor
	e) ponteiro = vetor+2
	- válido aponta para o elemento de indice 2 do vetor
	*/
}
