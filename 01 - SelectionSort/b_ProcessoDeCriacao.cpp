//meu selectionsort

#include <iostream>
using namespace std;

void selectionSort(int vet[], int n)
{
    /*
        raciocínio
        1 - temos que possuir uma variável menor valor para realizar as comparações. int menorValor
        2 - a primeira variável menorValor é meramente ilustrativa, ela pode ou não ser de fato o menor valor
        do ciclo, o que importa é que ela vai servir para comparações
        3 - comparamos da esquerda para a direita
        4 - vamos supor que o começo do vetor é sempre a posição x
      add - menorValor sempre vai começar com o valor dessa posição x
        5 - se achar um valor na posição y menor que o menorValor, menorValor recebe o valor da posição y
        6 - não podemos efetuar uma troca assim que atualizamos menorValor porque podem haver outros valores menores
        7 - vamos supor que o último valor menor que menorValor encontrado estava na posição z, menorValor recebe o valor da posição z e 
        esse primeiro ciclo de procura termina
        8 - agora sim podemos trocar de lugar o valor na posição z com o primeiro valor que estava na posição x
        9 - para isso precisamos de algum registro de que o menorValor final estava na posição z, já que essa operação vai ocorrer fora do ciclo de procura
       10 - utilizamos uma variável indice para receber o indice da posição z
      add - (...) menorValor recebe o valor da posição z, indice recebe o indice da posição z e esse primeiro ciclo de procura termina.
       11 - para a troca de lugar, vamos utilizar uma variável auxíliar aux para realizarmos a troca
       12 - aux recebe o valor da posição x, valor da posição x recebe o da posição z e o da posição z recebe o valor da aux
       13 - agora a primeira posição está ordenada e precisamos repetir o processo para o resto das posições, o que indica um ciclo maior que o de procura
       14 - colocamos tudo isso dentro de um for então, para realizar o ciclo maior
      add - no começo do for inicializamos menorValor com o valor da posição x, assim como dito depois da instrução 4. 
      para isso fazemos menorValor = vet[i]. 
       15 - o ciclo menor sempre compara com as posições desordenadas, por que é óbvio que os valores menores sempre estarão nas posições ordenadas,
       então elas precisam ser desconsideradas
       16 - fazemos o ciclo de procurar girar em função da variável de controle do ciclo maior
       17 - a primeira comparação sempre vai ser do primeiro menorvalor consigo mesmo, sempre dando falso, então podemos desconsiderar ele
       18 - o for do ciclo de procura vai rodar em relaçao a variável de controle do for do ciclo maior + 1 

    */

   //Declaração de variáveis
   int menorValor;
   int indice;
   int aux;
   //-----------------------

   //For do ciclo maior ---------------------------------------------
   for( int i=0 ; i<n ; i++)
   {
        menorValor = vet[i]; // menorValor da vez

        for( int j = i+1 ; j<n ; j++) //For do ciclo de procura -----
        {
            //procura:
            if(vet[j] < menorValor)
            {
                menorValor = vet[j];
                indice = j;
            }
        }
        //-------------------------------------------------------------

        //realização da troca assim que o ciclo de procura termina. ---
        aux = vet[i];
        vet[i] = vet[indice];
        vet[indice] = aux;
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
    cout << "O vetor desordenado é: " << endl;
    for(int i=0 ; i<n ; i++)
    {
        cout << vet[i] << " ";
    }
    // ----------------------------------------

    // Chamada da função ---
    selectionSort( vet, n);
    //----------------------

    // impressão do vetor ordenado ------------------------
    cout << "O vetor ordenado fica dessa forma: " << endl;
    for(int i=0; i<n ; i++)
    {
        cout << vet[i] << " ";
    }
    // ----------------------------------------------------

    return 0;
}