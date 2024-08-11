
    #include <iostream>
    using namespace std;

    void selectionSort(int vet[], int n)
    {
        //1 elemento será comparado com o resto
        int menorValor = vet[0]; //variável que vai receber o valor do "menor valor"
        int aux = 0; //variável auxiliar para a troca de valores
        int z = 0; //variável para receber o índice
        bool teste = false; //variável para confirmar que houve troca
        
        for( int i = 0 ; i < n-1 ; i++) //for para percorrer o vetor
        {
            for( int j = i + 1 ; j < n ; j++) // j vai selmpre estar paralelo ao elemento comparado
            {
                if ( vet [j] < menorValor)
                {
                    menorValor = vet [j];
                    z = j; //uma variável precisa receber o j pra saber quem alterou "menorValor" por último
                    teste = true; // confirmação de mudança do menor valor
                }
            }
            //o i aqui sempre vai ser o indice do menor valor
            if ( teste == true )
            {
                //troca
                aux = vet [i];
                vet[i] = vet[z];
                vet[z] = aux;
                teste = false; // ele precisa voltar a ser false pro teste ser feito novamente no próximo ciclo do for interno
            } else
            {
                menorValor = vet[i+1]; // pra ocorrer a mudança do menor que eu to comparando mesmo quando não entrar no if. Se não vou ficar preso no mesmo menor 
            }

        }
    }

    int main ()
    {
        int vet [7] = {2,7,3,6,2,1,4}; // declaração do vetor teste
        int n = 7;  

        selectionSort(vet, n); // chamada da função

        for (int i = 0 ; i<7 ; i++) //for que vai percorrer o vetor para imprimir seus elementos
        {
            cout << vet[i] << " ";  // impressão de elementos
        }

        return 0;
    }
    /*
        Nesse algoritmo, ao invés de comparar de dois em dois, compararemos 1 elemento com todos os outros.

        ---

        Método mais eficiente, que eu vi no visualgo

            - estabelecemos um menor valor
            - o algaritmo percorre o vetor a procura de um valor menor que o estabelecido
            - se ele achar, ele não para. Ele continua para caso exista um menor ainda.
            - caso exista um menor ainda, ele quem vai trocar com o primeiro a ser estabelecido como menor valor
            - após percorrer o vetor inteiro, aquele que ficou como menor não será mais envolvido e o algoritmo continuará o processo com o resto
    
    */