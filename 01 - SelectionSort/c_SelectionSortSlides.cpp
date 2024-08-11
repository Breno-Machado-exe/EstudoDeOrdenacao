#include <iostream>
using namespace std;

void selectionSort(int vet[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min = i;
            for(int j = i+1; j < n; j++)
            {
                if(vet[j] < vet[min])
                min = j;
            }
            //troca(&vet[i], &vet[min]);

            /*
                preguiça de adaptar o bloco de código da troca pra ca :)
                esses slides de "o código no slide" são meramente ilustrativos pra mostrar como que era
                esperado que eu fizesse
                
            */
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