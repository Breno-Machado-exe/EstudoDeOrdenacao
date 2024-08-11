//Implementação dos slides

#include <iostream>
using namespace std;

void bubbleSort(int vet[], int n)
{
    //parte do meu código
    int aux = 0 ;
    //-------------------


    for(int i = n-2; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            if(vet[j] > vet[j+1])
            {
                //troca(&vet[j], &vet[j+1]);
                //troca que eu tinha feito:
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }

        }
    }
}
int main ()
{   
    int vet [7] = {2,7,3,6,2,1,4}; // declaração do vetor teste
    int n = 7;  

    bubbleSort(vet, n); // chamada da função

    for (int i = 0 ; i<7 ; i++) //for que vai percorrer o vetor para imprimir seus elementos
    {
        cout << vet[i] << " ";  // impressão de elementos
    }

    return 0;
}