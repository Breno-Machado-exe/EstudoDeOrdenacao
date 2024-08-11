/*
    - Recursivo - 
    
    Processo:

    dividir uma lista desordenada em listas menores;
    ordena as listas menores recursivamente e reune em uma lista só ordenada

    - Divide o vetor no meio
    - Ordena as metades
    - Intercala as metades
    
    Ideia:

    1- Temos um vetor e vamos reparti-lo em 2
    2- Teremos 2 funções, uma para realizar a partição e outra para mesclarr
    3- Vamos utilizar vetores alocados dinâmicamente para receber cada metade
    4- Precisamos saber o tamanho do vetor, e seu meio
    5- O caso base da recursão é o tamanho = 1
    6- Criamos os dois vetores dinâmicos para receber os valores até a metade para o primeiro
    e do resto até o final pro segundo
    7- criamos duas variáveis para percorrer os vetores dinâmicos quando eles receberem o valor do vetor padrão
    8-chamamos recursivamente e mandamos o vetor dinâmico da esquerda e depois chamamos novamente para o vetor da direita
    9- chamamos a função de mesclar e unimos os 2 vetores dinâmicos no vetor original
    10- na função merge, termos 3 indices que irão crescer, um pra cada vetor
    11- enquanto o indice do vetor da esquerda for menor que o tamanho dele 
    e o indice do vetor da direita for menor que ele, iremos adicionar os valores do vetor principal 
    12 - a condição para mesclagem acontecer é um valor ser menor que o outro para ele ser adicionado, se não for o do outro é adicionado
    13- vai ter pelo menos um elemento em cada lado que vai sobrar por só ter ele, então precisamos de um laço que jogue ele no vetor principal 
    14- 
*/
#include <iostream>
using namespace std;

void merge()
{
    
}

void mergeSort(int vet[], int n)
{   
    //tamanho do vetor = n
    /*
        tamanho dos vetores dinâmicos 
        esquerda = metade do tamanho 
        direita = tamanho menos a metade, ou seja, a outra metade

        não da no mesmo os dois serem n/2? não. Existe a possibilidade do vetor ser impar

    */
    int meio = n/2;
    int *esquerda = new int[meio];
    int *direita = new int[n - meio];

    //caso base =  tamanho = 1
    if( vet[n] <= 1)
    {
        return;
    }
    //------------------------

    int i = 0 ; //variável pro esquerda
    int j = 0 ; //variável pro direita

    for (; i < n ; i++)
    {
        if(i<meio)
        {
            esquerda[i] = vet[i];
        }
    }


}


int main ()
{
    // Declarações ------------------------------------------------------
    int vet[8] = {2,7,3,6,2,1,4,9};
    int n = 8; //para passar pra função como n e não como 7
    // ------------------------------------------------------------------


    // impressão do vetor desordenado ---------
    cout << "O vetor desordenado eh: " << endl;
    for(int i=0 ; i<n ; i++)
    {
        cout << vet[i] << " ";
    }
    // ----------------------------------------

    // Chamada da função ---
    mergeSort( vet, n);
    //----------------------

    // impressão do vetor ordenado ------------------------
    cout << "\nO vetor ordenado fica dessa forma: " << endl;
    for(int i=0; i<n ; i++)
    {
        cout << vet[i] << " ";
    }
    // ----------------------------------------------------

}