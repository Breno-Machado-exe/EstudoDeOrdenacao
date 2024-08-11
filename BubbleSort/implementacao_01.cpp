//Implementação que saiu da minha cabeça:

#include <iostream>
using namespace std;

void bubblesort(int vet[7])
{   
    int aux = 0; // variávcel que vai servir de auxíliar para a realização das trocas

    for(int j = 0 ; j<7 ; j++) //for que vai garantir que a implementação vai ser executada até o vetor inteiro ser ordenado 
    {
        for ( int i = 0 ; i<7 ; i++) //for que vai percorrer o vetor
        {
            if (vet[i] > vet [i+1]) // caso o elemento referência seja maior que o adjacente
            {
                //realização da troca
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            
            }
         }
    }

}

int main ()
{   
    int vet [7] = {2,7,3,6,2,1,4}; // declaração do vetor teste

    bubblesort(vet); // chamada da função

    for (int i = 0 ; i<7 ; i++) //for que vai percorrer o vetor para imprimir seus elementos
    {
        cout << vet[i] << " ";  // impressão de elementos
    }

    return 0;
}

/*

# Bubble Sort (elementar)

---

É um algoritmo que percorre um vetor de elementos comparando o primeiro elemento com seu adjacente, o adjacente com o seu adjacente e assim a diante até terminar de percorrer o vetor.

Em cada comparação, o algoritmo verifica se o adjacente é menor que o elemento referencial. Caso seja menor, eles trocam de lugar.

Ao longo de toda a execução o vetor será percorrido o suficiente para ordenar todos os elementos, e será perceptível que os maiores elementos irão “subir” no vetor tal qual uma bolha em uma superfície líquida. Por isso o nome Bubble sort;

custo assintótico = O(n^2)

estável

*/