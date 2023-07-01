#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int k;
    int n;
    int opcaotam;
    srand(time(0));

    cout << "Selecione um tamanho para o vetor: " << endl;
    cout << "1. 100 posições" << endl;
    cout << "2. 1000 posições" << endl;
    cout << "3. 100000 posições" << endl;
    cout << "Digite o numero da opção desejada: ";
    cin >> opcaotam;

    switch (opcaotam) {
        case 1:
            cout << "100 posições selecionado." << endl;
            n = 100;
            k = 100;
            break;

        case 2:
            cout << "1000 posições selecionado." << endl;
            n = 1000;
            k = 1000;
            break;

        case 3:
            cout << "10000 posições selecionado." << endl;
            k = 10000;
            n = 10000;
            break;

        default:
            cout << "Tamanho invalido!" << endl;
            break;
    }
    cout << endl;
    
    int vetor[n];
    for (int i = 0; i < n; i++){
        vetor[i] = rand();
    }

    int opcaotipo;

    cout << "Selecione como você quer deixar o vetor: " << endl;
    cout << "1. Crescente" << endl;
    cout << "2. Aleatório" << endl;
    cout << "3. Decrescente" << endl;
    cout << "Digite o numero da opcao desejada: ";
    cin >> opcaotipo;

    switch (opcaotipo) {
        case 1:
            cout << "Crescente selecionado." << endl;
            // Realize as operações correspondentes à Opcao 1
            break;

        case 2:
            cout << "Aleatório selecionado." << endl;
            // Realize as operações correspondentes à Opcao 2
            break;

        case 3:
            cout << "Decrescente selecionado." << endl;
            // Realize as operações correspondentes à Opcao 3
            break;

        default:
            cout << "Forma de ordenação inválida" << endl;
            break;
    }
    cout << endl;
    // // Mostrando o vetor original
    // cout << "Vetor Original: ";
    // for (int i = 0; i < k ;i++){
    //     cout << vetor[i] << " ";
    // }

    int opcaoOrdenacao;

    cout << "Selecione uma opcao: " << endl;
    cout << "1. Insert Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Bubble Sort" << endl;
    cout << "Digite o numero da opção desejada: ";
    cin >> opcaoOrdenacao;

    switch (opcaoOrdenacao) { // Insertion Sort
        case 1:
            cout << "Insert Sort selecionado." << endl;
            for (int i = 1; i < k; i++){
                int key = vetor[i];
                int j = i - 1;

                while (j >= 0 && vetor[j] > key) {
                    vetor[j + 1] = vetor[j];
                    j--;
                }
                vetor[j + 1] = key;
            }
            break;

        case 2:
            cout << "Selection Sort selecionado." << endl;
            for (int i = 0; i < k - 1; i++){
                int keym = i;
                for (int j = i + 1; j < k; j++){
                    if (vetor[j] < vetor[keym]){
                        keym = j;
                    }
                }
                int temp = vetor[keym];
                vetor[keym] = vetor[i];
                vetor[i] = temp;
            }
            break;

        case 3:
            cout << "Bubble Sort selecionado." << endl;
            for(int i = 0; i < k - 1; i++){
                for (int j = 0; j < k - 1; j++)
                {
                    if (vetor[j] > vetor[j + 1]){
                        int temp = vetor[j];
                        vetor[j] = vetor[j + 1];
                        vetor[j + 1] = temp;
                    }
                }
            }
            break;

        default:
            cout << "Método de Ordenação inválida!" << endl;
            break;
    }

    cout << endl;
    cout << "Dados gerados com sucesso: " << endl;
    // Mostrando o vetor ordenado 
    // cout << endl << "Vetor ordenado: ";
    // for (int i = 0; i < k; i++) {
    //     cout << vetor[i] << " ";
    // }
    // cout << endl;

    return 0;
}
