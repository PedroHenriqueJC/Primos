# Primos

## Oque são?

	Números primos são números que são divisíveis somente por 1 e ele mesmo. 
	Tentar encontrar números primos computacionalmente pode vir a ser um problema porque números muito grandes custariam um alto nível de processamento. Portanto, tentamos otimizar essa busca.

	Aqui veremos alguns testes feitos por mim e a evolução em tempo. 
	Lembrando que todas as execuções foram feitas no linux e contabilizadas usando o comando time.

	A ideia a princípio é realizar testes sem a ajuda de pesquisa

## Versões:
	Em maioria das versões usamos a técnica de \frac{x}{i} < i. 
	Sendo i números menores que x e x o número que estamos testando. 
	Se a afirmação for verdadeira x é primo.

	Todos os testes são feitos até 1000000000(1 bilhão).

	Ao compilar estou utilizando a flag -O2.

### I:
	Nessa versão utilizei a simples técnica de um for loop;
	Porém, estava nesse momento testando com TODOS os números, inclusives pares, e obviamente pares não podem ser primos.

	Fazendo o teste conseguimos: 46m34.936s

### II:
	Agora utilizando a mesma técnica do anterior, testando se o número não é par e verificando somente número ímpares.

	Fazendo o teste conseguimos: 28m38.735s

### III:
	Ainda trabalhando nessa versão, nela estou utilizando a técnica de verificar com a raiz do número, assim diminuo o número e faço com que o processamento fique mais rápido

	Fazendo o teste conseguimos: XXmXX.XXXsS