#include <iostream>
using namespace std;

void merge(int vetorEsquerda[], int x,  int vetorDireita[], int y , int vet[])
{
    //vai receber o vetor da esquerda, o da direita e o original    

    //vamos trabalhar com indices para cada vetor ----------------------
    int i = 0;
    int l = 0;
    int r = 0;
    // -----------------------------------------------------------------

    //intercalação -----------------------------------------------------
    
    while(l < x && r < y )
    {
        //chegar qual é menor
        if ( vetorEsquerda[l] < vetorDireita[r])
        {
            vet[i] = vetorEsquerda[l];
            i++;
            l++;    
        }
        else
        {
            vet[i] = vetorDireita[r];
            i++;
            r++;
        }
    }

    //-------------------------------------------------------------------

    //Quando sobrar um elemento que não consegue ser comparado com outro
    while(l< x)
    {
        vet[i] = vetorEsquerda[l];
        i++;
        l++;
    }
    while(r < y)
    {
        vet[i] = vetorDireita[r];
        i++;
        r++;
    }
}

void mergeSort(int vet[], int n)
{ 
    //nossa função mergesort vai focar em dividir o vetor
    //depois, chamada recursivamente, ela vai receber um "vetor menor" e dividi-lo novamente
    //tamanho do vetor original = 8

    //caso base ---------------------------------------------------------
    if ( n <= 1 )
    {
        return;
    } 
    // ------------------------------------------------------------------

    int meio = n /2 ; // variável que vai guardar o que seria o meio do nosso vetor

    // criação por alocação dinâmica dos dois vetores menores -----------
    int *vetorEsquerda = new int [meio];
    int *vetorDireita = new int [n - meio];
    // ------------------------------------------------------------------

    //não daria no mesmo os dois terem tamanho meio? Não, pq o vetor modelo pode ser impar

    //agora precisamos copiar os elementos do nosso vetor modelo para eles

    //vamos usar um indice para cada um ---------------------------------
    //o indice o esquerdo é o mesmo que o do modelo (praticidade)
    int j = 0; //para o da direita
    //-------------------------------------------------------------------

    //vamos usar também para armazenar o tamanho dos vetores dinâmicos---
    int x = 0;
    int y = 0;
    //-------------------------------------------------------------------

    //agora passamos os valores do vetor modelo para os dinâmicos -------
    for (int i = 0 ; i<n ; i++)
    {
        if(i<meio)
        {
            vetorEsquerda[i] = vet[i];
            x++;
        }
        else
        {
            vetorDireita[j] = vet[i];
            y++;
            j++;
        }
    }
    //-------------------------------------------------------------------

    //chamada recursiva -------------------------------------------------
    mergeSort(vetorEsquerda, x);
    mergeSort(vetorDireita, y );
    merge(vetorEsquerda, x , vetorDireita, y, vet);

    // deletando os vetores dinâmicos -----------------------------------
    delete[] vetorEsquerda;
    delete[] vetorDireita;
    //-------------------------------------------------------------------
}


int main ()
{
    // Declarações ------------------------------------------------------
    int vet[8] = {8,2,5,3,4,7,6,1};
    int n = 8; //para passar pra função como n e não como 8
    // ------------------------------------------------------------------


    // impressão do vetor desordenado -----------------------------------
    cout << "O vetor desordenado eh: " << endl;
    for(int i=0 ; i<n ; i++)
    {
        cout << vet[i] << " ";
    }
    // ------------------------------------------------------------------

    // Chamada da função ------------------------------------------------
    mergeSort( vet, n);
    //-------------------------------------------------------------------

    // impressão do vetor ordenado --------------------------------------
    cout << "\nO vetor ordenado fica dessa forma: " << endl;
    for(int i=0; i<n ; i++)
    {
        cout << vet[i] << " ";
    }
    // ------------------------------------------------------------------

    return 0;
}