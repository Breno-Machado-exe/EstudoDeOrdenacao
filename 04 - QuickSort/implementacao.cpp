#include <iostream>
using namespace std;

void quickSort(int vet[], int n)
{
    int pivot = vet[n/2];
    int i = -1; //vai estar logo atrás do j do for
    int aux = 0;

    for (int j = 0; j < n; j++)
    {
        //j vai percorrer o vetor e vai ficar comparando com o pivot
        if ( vet[j] < pivot)
        {
            i++;
            aux = vet[j];
            vet[j] = vet[i];
            vet[i] = aux;
        }
    }
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
    quickSort( vet, n);
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