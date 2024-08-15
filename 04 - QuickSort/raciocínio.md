Conceito do QuickSort

- Escolher um pivô
- Dividir as chaves em:
    menores que o pivô
    maiores que o pivô
- Ordena as menores e maiores recursivamente


Processo

- Escolha do pivô 
- Compara um elemento com o pivô

    Exemplo: Caso o pivô seja o elemento da extrema esquerda
- Começamos a comparar da direita para esquerda
- Se menor que o pivô, troca de lugar com ele
- Se maior que o pivô, permanece no mesmo lugar
- Ao fim, teremos maiores de um lado e menores do outro e o pivô no seu local original
- Chamamos recursivamente para ler os menores e os maiores
- Com dois elementos após realizada a mudança de posição, o vetor já está ordenado

    Execução do mano do Bro code
-j irá percorrer o vetor
-i vai estar fora do vetor
-toda vez que achamos uma variável menor que o pivô, i anda pra frente 
-a troca vai ser feita com uma auxíliar para que o valor de j vá para a posição de i
- quando j atingir o pivô, i aumenta 1 e troca de lugar com o pivô
    