#include <iostream> 
using namespace std;

void quickSort(int vet[], int inicio, int fim)
{
    //caso base -----------------------------------
    if(fim<=1)
    {
        return;
    }
    //---------------------------------------------

    int pivot = particao(vet,inicio,fim);
    quickSort(vet, inicio, pivot-1);
    quickSort(vet, pivot+1 , fim);
}

int particao(int vet[], int inicio, int fim)
{
    int pivot = (inicio+fim)/2;
    int aux = 0;
    int i = inicio - 1;
    for (int j = 0; j < fim ; j++)
    {
        if ( vet [j] > pivot)
        {
            
        }
    }
    //vai mostrar a posição do pivô
    return i;
}

int main ()
{
    int vet[8] = {7,2,4,5,1,3,9,10};
    int fim = 8;
    int inicio =0;
    //---------------------------------------------
    cout << "Vetor desordenado: " <<endl;
    for(int i=0 ; i<fim ; i++)
    {
        cout << vet[i] <<" ";
    }
    //---------------------------------------------
    
    quickSort(vet,inicio,fim);
    
    //---------------------------------------------
    for(int i=0 ; i<fim ;i++)
    {
        cout << vet[i] <<" ";
    }
    //---------------------------------------------
    return 0;
}