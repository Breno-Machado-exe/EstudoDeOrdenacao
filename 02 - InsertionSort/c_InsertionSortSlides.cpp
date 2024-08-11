#include <iostream>
using namespace std;


void insertionSort(int vet[], int n)
{
    for(int j = 1; j < n; j++)
    {
        int pivo = vet[j];
        int i = j - 1;
            
            while(i >= 0 && vet[i] > pivo)
            {
                vet[i+1] = vet[i];
                i = i - 1;
            }
        
        vet[i+1] = pivo;
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
    insertionSort( vet, n);
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