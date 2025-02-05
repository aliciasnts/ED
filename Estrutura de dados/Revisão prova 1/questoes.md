### Revisão de Ponteiros e Alocação Dinâmica de Memória
        
Ponteiros são variáveis que armazenam endereços de memória. Eles são fundamentais para manipular estruturas de dados dinâmicos, como listas encadeadas e árvores. A alocação dinâmica de memória permite que você reserve espaço em tempo de execução, usando funções como malloc, calloc, realloc e free.

*Questões:*
1. Crie um programa que aloque dinamicamente um vetor de inteiros de tamanho 10, preencha-o com valores de 1 a 10 e imprima os valores.
2. Escreva uma função que receba dois ponteiros para inteiros e troque os valores das variáveis apontadas por eles.
3. Crie um programa que aloque dinamicamente uma matriz 3x3 de inteiros, preencha-a com valores sequenciais e imprima a matriz.
4. Escreva uma função que receba um ponteiro para um vetor de inteiros e seu tamanho, e retorne a soma dos elementos.
5. Crie um programa que aloque dinamicamente uma string, leia uma palavra do usuário e imprima a palavra invertida.

   

### Complexidade de Algoritmos 
        
A complexidade de algoritmos mede o desempenho de um algoritmo em termos de tempo (complexidade temporal) e espaço (complexidade espacial). É comum usar a notação Big-O para descrever o pior caso de um algoritmo.

*Questões:*
1. Dado um algoritmo com complexidade O(n), explique o que acontece com o tempo de execução se o tamanho da entrada dobrar.
2. Analise a complexidade do seguinte código e explique por quê:
               c
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           printf("%d ", i + j);
       }
   }
               
3. Escreva um algoritmo para encontrar o maior elemento em um vetor e determine sua complexidade.
4. Dado um algoritmo com complexidade O(log n), explique por que ele é mais eficiente que um algoritmo O(n) para entradas grandes.
5. Implemente uma busca binária em um vetor ordenado e analise sua complexidade.



### Listas Lineares de Dados 
        
Listas lineares são estruturas de dados que armazenam elementos em uma sequência. Podem ser implementadas como arrays (vetores) ou listas encadeadas. As operações básicas incluem inserção, remoção e busca.

*Questões:*
1. Implemente uma lista linear usando um vetor e crie funções para inserir, remover e buscar elementos.
2. Escreva um programa que leia 5 números do usuário, armazene-os em uma lista linear e imprima a lista.
3. Crie uma função que receba uma lista linear e retorne o número de elementos pares.
4. Implemente uma função que inverta a ordem dos elementos em uma lista linear.
5. Escreva um programa que remova todos os elementos duplicados de uma lista linear.


   
### Lista Simplesmente Encadeada 
        
Uma lista simplesmente encadeada é uma estrutura de dados dinâmica onde cada elemento (nó) contém um valor e um ponteiro para o próximo nó. A inserção e remoção são mais eficientes que em vetores, mas o acesso é sequencial.

*Questões:*
1. Implemente uma lista simplesmente encadeada e crie funções para inserir no início, no fim e em uma posição específica.
2. Escreva uma função que imprima todos os elementos de uma lista encadeada.
3. Crie uma função que remova um nó com um valor específico da lista.
4. Implemente uma função que inverta a ordem dos nós em uma lista encadeada.
5. Escreva um programa que leia números do usuário e os insira em uma lista encadeada até que o usuário digite 0.

   

### Lista Circular 
        
Uma lista circular é uma variação da lista encadeada onde o último nó aponta de volta para o primeiro, formando um ciclo. Isso é útil em aplicações como buffers circulares.

*Questões:*
1. Implemente uma lista circular e crie funções para inserir no início e no fim.
2. Escreva uma função que imprima todos os elementos de uma lista circular.
3. Crie uma função que remova um nó com um valor específico de uma lista circular.
4. Implemente uma função que verifique se uma lista encadeada é circular.
5. Escreva um programa que simule um buffer circular usando uma lista circular.

   


### Lista Duplamente Encadeada e Multilista 
        
Uma lista duplamente encadeada permite navegação para frente e para trás, pois cada nó contém ponteiros para o próximo e o anterior. Multilistas são estruturas mais complexas que permitem múltiplas relações entre elementos.

*Questões:*
1. Implemente uma lista duplamente encadeada e crie funções para inserir no início e no fim.
2. Escreva uma função que imprima os elementos de uma lista duplamente encadeada em ordem reversa.
3. Crie uma função que remova um nó com um valor específico de uma lista duplamente encadeada.
4. Implemente uma função que insira um nó em uma posição específica de uma lista duplamente encadeada.
5. Escreva um programa que simule uma multilista para armazenar informações sobre alunos e disciplinas.

   


### Nó Cabeça em Listas Encadeadas  
          
O nó cabeça é um nó fictício que sempre aponta para o primeiro elemento da lista. Ele não armazena dados úteis, mas facilita a manipulação da lista, evitando casos especiais (como listas vazias ou inserções no início).

*Questões:*
1. Implemente uma lista simplesmente encadeada com nó cabeça e crie funções para inserir no início e no fim.
2. Escreva uma função que imprima todos os elementos de uma lista com nó cabeça.
3. Crie uma função que remova um nó com um valor específico de uma lista com nó cabeça.
4. Implemente uma função que inverta a ordem dos nós em uma lista com nó cabeça.
5. Escreva um programa que leia números do usuário e os insira em uma lista com nó cabeça até que o usuário digite 0.

  

### Nó Cabeça em Listas Circulares  
          
Em uma lista circular com nó cabeça, o último nó aponta de volta para o nó cabeça, formando um ciclo. O nó cabeça facilita a manipulação da lista, especialmente em operações de inserção e remoção.

*Questões:*
1. Implemente uma lista circular com nó cabeça e crie funções para inserir no início e no fim.
2. Escreva uma função que imprima todos os elementos de uma lista circular com nó cabeça.
3. Crie uma função que remova um nó com um valor específico de uma lista circular com nó cabeça.
4. Implemente uma função que verifique se uma lista circular com nó cabeça está vazia.
5. Escreva um programa que simule um buffer circular usando uma lista circular com nó cabeça.
  

### Nó Cabeça em Listas Duplamente Encadeadas  
          
Em uma lista duplamente encadeada com nó cabeça, o nó cabeça aponta para o primeiro e o último nó da lista. Isso facilita operações como inserção no início e no fim, além de permitir navegação em ambas as direções.

Questões:  
1. Implemente uma lista duplamente encadeada com nó cabeça e crie funções para inserir no início e no fim.
2. Escreva uma função que imprima os elementos de uma lista duplamente encadeada com nó cabeça em ordem reversa.
3. Crie uma função que remova um nó com um valor específico de uma lista duplamente encadeada com nó cabeça.
4. Implemente uma função que insira um nó em uma posição específica de uma lista duplamente encadeada com nó cabeça.
5. Escreva um programa que simule uma lista de tarefas usando uma lista duplamente encadeada com nó cabeça.


### Pilha e Fila 
        
-  Pilha (LIFO):  O último elemento inserido é o primeiro a ser removido.
-  Fila (FIFO):  O primeiro elemento inserido é o primeiro a ser removido.

Questões:
1. Implemente uma pilha usando um vetor e crie funções para push, pop e verificar se a pilha está vazia.
2. Escreva um programa que use uma pilha para inverter uma string.
3. Implemente uma fila usando uma lista encadeada e crie funções para enqueue, dequeue e verificar se a fila está vazia.
4. Crie uma função que verifique se uma expressão matemática está balanceada usando uma pilha.
5. Escreva um programa que simule uma fila de impressão usando uma fila.
