

#Ideias: fazer cases como interfaces que definam se eu quero uma lista de qual tamanho e depois decidir se eu quero ela crescente, aleatória ou descrescente 

// Criando as listas 
        int vetor[100]; //Declarando o vetor com tamanho 100

        // Semente usada para criar vetores diferentes todas as vezes que eu gerar o código
        srand((unsigned)time(NULL));

        for(int i=0; i <=100; i++){ // 

            vetor[i] = rand() % 100;
            printf("vetor %d : %d\n", i, vetor[i]);
        }

//principais códigos para gerar números aleatorios
srand((unsigned)time(NULL)); // código srand é utilizando como uma "semente" que possibilita a geração de número aleatórios todas as vezes que eu gerar random(num)
x = rand() % 100; // eu faço com que a variavel "x" receba a sua um valor aleatório entre 1 e 100, posso definir o tamanho 100, 1000, 10000

// Processo de criação
1)Gerar vetores com numeros aleatórios
2)utilizar o insert, bubble, selection em algoritmos que estejam crescentes, aleatórios (fazer vários com essa e pegar uma média) e descrescente.
3)Após realizar todas as operações, criar um gráfico a partir dos resultados e verificar qual possui maiores vantagens em relações a outras.

1)
criar 3 vetores diferentes com tamanhos 100, 1000, 10000
criar 15 vetores diferentes com tamanhso 100, 1000, 10000 para criar uma média para o aleatório
fazer com que a função random crie numeros aleatorios que implementem nos vetores de forma crescente, aleatoria e descrescente

2)
Fazer uma função insert, uma função bubble, uma função selection com switch para insirar qual caso vou querer fazer
Comparar os métodos de ordenação
	Criar um variavel que vá contabilizar quantas repetições ele realizou para ordenar tal vetor
	(opcional) comparar por tempo
	Obs: quando os vetores foram colocados de forma aleatório, ele vai poder beneficiar tal método, então o correto seria fazer os testes aleatorios 5 vezes
	Fazer a comparação com 3 tamanhos diferentes em cada situação

3)
realizar uma comparação a partir do tanto de vezes que aquele método contabilizou gráficamente e comparar os 3 métodos de comparação
	terá 9 gráficos no total.

4)
Fora do algoritmo, fazer o relatório que ele pediu, incluindo o material utilizado, fontes, etc.
