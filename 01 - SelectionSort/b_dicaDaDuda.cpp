#include <iostream>
using namespace std;


/*
    Dica da duda 
    Não precisa criar duas variáveis
    Tu pode mexer só com os indices :)
*/


void selectionSort(int vet[], int n)
{
   //Declaração de variáveis
   int menorValor;
   int aux;
   //-----------------------

   //For do ciclo maior ---------------------------------------------
   for( int i=0 ; i<n ; i++)
   {
        menorValor = i; // menorValor da vez

        for( int j = i+1 ; j<n ; j++) //For do ciclo de procura -----
        {
            //procura:
            if(vet[j] < vet[menorValor])
            {
                menorValor = j;

            }
        }
        //-------------------------------------------------------------

        //realização da troca assim que o ciclo de procura termina. ---
        aux = vet[i];
        vet[i] = vet[menorValor];
        vet[menorValor] = aux;
        //-------------------------------------------------------------
   }
   //------------------------------------------------------------------
   
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
    selectionSort( vet, n);
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