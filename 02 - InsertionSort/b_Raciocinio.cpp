/*
    O inserction sort é um algortimo que percorre um vetor da esquerda para a direita
    e compara um elemento de cada vez com o elemento da esquerda, ou seja, o elemento
    que já foi verificado.
    Caso o elemento a esquerda seja maior, ele troca de lugar e contuinua trocando
    de lugar até o elemento da esquerda ser menor.

*/

#include <iostream>
using namespace std;

/*
    Raciocínio
    - eu vou percorrer o vetor e comparar com o elemento anterior
    - aparentemente, tanto faz se eu começar do segundo elemento ou do primeiro;
    Começando do primeiro, eu teria que adicionar que se não tiver elemento na esquerda, eu sigo em frente. 
    Então vou começar do segundo elemento.
    - vai haver uma comparação do elemento na posição x com o elemento na posição x-1
    - se elemento na posição x-1 for menor, nada acontece
    - se elemento na posição x-1 for maior que elemento na posição x, eles trocam de lugar
    - assim que a troca for realizada, o elemento que agora está na posição x-1 vai ser comparado com o de x-2 
    até que não tenha um menor à esquerda
    - se o elemento de x-2 for menor, ele troca de lugar com o elemento de x-1

    Passo a Passo
    1- um for vai percorrer o vetor
    2- é necessário realizar a comparação com o item anterior e a troca várias vezes, então precisamos de
    uma estrutura de repetição
    3- utilizamos um while pq não é necessário um contador
    4- a condição do while é a comparação do elemento anterior com o atual, visto que no 
    inserctionsort nos permanecemos olhando para trás pra testar se existe um valor menor
    5- ao final do while precisamos descrescer o indice para compararmos com os valores de trás
    para isso utilizamos uma nova variável
    6- a nova variável j vai ter seu valor atrelado ao i, assim passamos o while utilizando o j
    descrescemos o j para analisar os elementos anteriores e inicializamos o j com o i novamente no ciclo seguinte
    7- ainda na condição, j precisa ser > 0 para que a comparação do while não aconteça com valores negativos, ou seja, fora do vetor
    

*/

void inserctionSort(int vet[], int n)
{
    int aux;
    int j;
    for(int i = 1; i<n ; i++) // for que vai percorrer o vetor durante as comparações
    {
        //i = 1 por que eu começar a andar do segundo
        j = i;
        while ( vet[j-1] >  vet[j] && j>0 )
        {
            aux = vet[j];
            vet[j] = vet[j-1];
            vet[j-1] = aux;
            j--; 
        }
    } 
}
int main ()
{   
    // Declarações ------------------------------------------------------
    int vet[7] = {2,7,3,6,2,1,4}; //declaração de nosso vetor desordenado
    int n = 7; //para passar pra função como n e não como 7
    // ------------------------------------------------------------------


    // impressão do vetor desordenado ---------
    cout << "O vetor desordenado eh: " << endl;
    for(int i=0 ; i<n ; i++)
    {
        cout << vet[i] << " ";
    }
    // ----------------------------------------

    // Chamada da função ---
    inserctionSort( vet, n);
    //----------------------

    // impressão do vetor ordenado ------------------------
    cout << "\nO vetor ordenado fica dessa forma: " << endl;
    for(int i=0; i<n ; i++)
    {
        cout << vet[i] << " ";
    }
    // ----------------------------------------------------

    return 0;
}