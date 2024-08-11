#include <iostream>
using namespace std;


void inserctionSort(int vet[], int n)
{
    int aux;
    int j;
    for(int i = 1; i<n ; i++) // for que vai percorrer o vetor durante as comparações -----------------
    {
        //i = 1 por que eu começar a andar do segundo
        j = i; //j volta a andar junto com o for externo

        while ( vet[j-1] >  vet[j] && j>0 ) //while para fazer as trocas enquanto necessário --
        {
            // o && j>0 tem que estar ali para ele não comparar um um j negativo que não existe 
            //troca -------------
            aux = vet[j];
            vet[j] = vet[j-1];
            vet[j-1] = aux;
            //-------------------

            j--; // j diminui para continuar comparando com os elementos na esquerda
        }
        //-------------------------------------------------------------------------------------
    } 
    //--------------------------------------------------------------------------------------------------
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