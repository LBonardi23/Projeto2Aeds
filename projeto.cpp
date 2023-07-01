#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

bool comparaDecrescente(int a, int b) {
    return a > b;
}

bool numeroJaGerado(int* vetor, int tamanho, int numero) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return true;
        }
    }
    return false;
}

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
    for (int i = 0; i < n; i++) {
        int numero;
        do {
            numero = rand() % n + 1;
        } while (numeroJaGerado(vetor, i, numero));

        vetor[i] = numero;
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
            sort(vetor, vetor + n);
            break;

        case 2:
            cout << "Aleatório selecionado." << endl;
            break;

        case 3:
            cout << "Decrescente selecionado." << endl;
            sort(vetor, vetor + k, comparaDecrescente);
            break;

        default:
            cout << "Forma de ordenação inválida" << endl;
            break;
    }
    cout << endl;

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
