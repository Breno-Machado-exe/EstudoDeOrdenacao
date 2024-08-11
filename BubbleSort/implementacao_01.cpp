#include <iostream>
using namespace std;

void bubblesort(int ver[7])
{   
    for ( int i = 0 ; i<7 ; i++)
    {
        
    }

}

int main ()
{   
    int vet [7] = {2,7,3,6,2,1,4};

    bubblesort(vet);

    for (int i = 0 ; i<7 ; i++)
    {
        cout << vet[i] << endl;
    }

    return 0;
}

/*

# Bubble Sort (elementar)

---

É um algoritmo que percorre um vetor de elementos comparando o primeiro elemento com seu adjacente, o adjacente com o seu adjacente e assim a diante até terminar de percorrer o vetor.

Em cada comparação, o algoritmo verifica se o adjacente é menor que o elemento referencial. Caso seja menor, eles trocam de lugar.

Ao longo de toda a execução o vetor será percorrido o suficiente para ordenar todos os elemento, e será perceptível que os maiores elementos irão “subir” no vetor tal qual uma bolha em uma superfície líquida. Por isso o nome Bubble sort;

custo assintótico = O(n^2)

estável

*/