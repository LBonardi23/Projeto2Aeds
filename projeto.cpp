#include <iostream>

using namespace std;

int main()
{
    // Criação de vetores
    int vetor[10]= {30,1, 3, 22, 12, 0, 3, 4};
    int k = 10; // tamanho do vetor

    // Mostrando o vetor original
    cout << "Vetor Original: ";
    for (int i = 0; i < k ;i++){
        cout << vetor[i] << " ";
    }
    cout << endl << endl;

    int opcaoOrdenacao;

    cout << "Selecione uma opcao: " << endl;
    cout << "1. Insert Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Bubble Sort" << endl;
    cout << "Digite o numero da opcao desejada: ";
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

    // Mostrando o vetor ordenado 
    cout << endl << "Vetor ordenado: ";
    for (int i = 0; i < k; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
