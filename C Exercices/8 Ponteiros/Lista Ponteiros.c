#include<stdio.h>
#include<locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	/*
	1) Explique a diferen�a entre: p++; (*p)++; *(p++);
	Resposta: 
	- p++ incrementa o ponteiro, passa a apontar para o proximo endereco
	- (*p)++ incrementa a variavel(conteudo) apontada pelo ponteiro
	- *(p++) primeiro incrementa o ponteiro alterando o endere�o que ele aponta e depois acessa a variavel apontada pelo ponteiro
	
	2) O que quer dizer a instru��o *(p+10);?
	Resposta:
	- aponta para posicao 10 a frente do ponteiro inicial e depois acessa o conteudo deste endere�o 
	/
	
	3) 3.Considere o seguinte trecho de programa:
		int i=3, j=5;
		int *p, *q;
		p = &i;
		q = &j;
		
	Qual � o valor das seguintes express�es?
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
	
	4) Qual ser� a sa�da do programa a seguir supondo que i ocupa o endere�o 4094 na mem�ria?
	main() {
	int i=5, *p;
	p = &i;
	printf(�%x %d %d %d %d \n�, p,*p+2,**&p,3**p,**&p+4);
	}
	
	Resposta:
	4094 7 5 15 9
	
	5) Se i e j s�o vari�veis inteiras e p e q ponteiros para int, quais das seguintes express�es de atribui��o s�o ilegais?
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
	
	6) Quais ser�o as sa�das do seguinte programa? (SLIDE)
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
	
	7) Qual � o resultado do seguinte programa?
	#include <stdio.h>
	
	int main(){
	float vet[5] = {1.1,2.2,3.3,4.4,5.5}, float *f;
	int i;
	f = vet;
	
	printf("contador/valor/valor/endereco/endereco");
	for(i = 0 ; i <= 4 ; i++){
		printf("\ni = %d",i);                              Resposta: 1� i = 0
		printf(" vet[%d] = %.1f",i, vet[i]);			   Resposta: 1� vet[0] = 1.1
		printf(" *(f + %d) = %.1f",i, *(f+i));			   Resposta: 1� 1.1 = 1.1
		printf(" &vet[%d] = %X",i, &vet[i]);			   Resposta: 1� &1.1 = &1.1
		printf(" (f + %d) = %X",i, f+i);				   Resposta: 1� &vet[0] = &vet[0] + 0
	}
}

	8) Assumindo que pulo[] � um vetor do tipo int, quais das seguintes express�es referenciam o valor do terceiro elemento do vetor?
	a) *(pulo + 2) b) *(pulo + 4) c) pulo + 4 d) pulo + 2
	Resposta:
	- Apenas a
	
	9) Suponha a seguinte declara��o: int mat[4], *p, x; Quais express�es s�o v�lidas? Justifique:
	a) p = mat + 1; b) p = mat++; c) p=++mat; d)x=(*mat)++;
	Resposta:
	a) v�lido mas o ponteiro aponta para um valor que � indeterminavel pois em mat n�o foi definido os valores dos indices
	b) n�o � v�lido pois tenta incrementar o ponteiro do vetor
	c) n�o � v�lido pois tenta pr�-incrementar o ponteiro do vetor
	d) v�lido mas o valor � indeterminavel pois em mat n�o foi definido os valores dos indices
	
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
	Resposta: realiza um print dos endere�os de cada elemento de vet &vet[0] &vet[1] &vet[2]
	
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
	
	11) Qual a sa�da do programa a seguir?
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
	
	%3d - se o n�mero inteiro tiver menos de 3 caracteres, espa�os em branco ser�o adicionados � esquerda para preencher a largura m�nima de 3 caracteres.
	Imprime a matriz adicionando os espa�os necess�rios
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
	
	13) Reescreva o programa abaixo usando ponteiros para acessar cada posi��o da matriz.
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
	
	14) Diga quais express�es abaixo s�o v�lidas. Considere as declara��es:
	int vetor[10];
	int *ponteiro;
	a) vetor = vetor + 2; 
	- n�o � v�lido, pois altera o ponteiro do vetor
	b) vetor++;
	- n�o � v�lido, pois altera o ponteiro do vetor
	c) vetor = ponteiro;
	- n�o � v�lido, pois altera o ponteiro do vetor
	d) ponteiro = vetor;
	- v�lido aponta para o elemento de indice 0 do vetor
	e) ponteiro = vetor+2
	- v�lido aponta para o elemento de indice 2 do vetor
	*/
}
