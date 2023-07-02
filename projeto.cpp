#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// função que retorna um valor booleano para criar o vetor de maneira decrescente
bool comparaDecrescente(int a, int b) {
    return a > b;
}

// função que retorna valores booleanos para verificar se o numero aleatório gerado já existe no vetor
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
    int x0 = 0;
    int x1 = 0;
    int x2 = 0;
    int y0 = 0;
    int y1 = 0;
    int y2 = 0;
    int z0 = 0;
    int z1 = 0;
    int z2 = 0;
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
    
    // Gerando um vetor aleatório sem repetir números
    int vetor[n];
    int vetorReset[n];
    for (int i = 0; i < n; i++) {
        int numero;
        do {
            numero = rand() % 1000000;
        } while (numeroJaGerado(vetor, i, numero));

        vetor[i] = numero;
        vetorReset[i] = numero;
    }
    cout << endl;
    cout << "Vetor: ";
    for (int i = 0; i < k; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Coletando os dados do vetor na forma aleatória

    // INSERT SORT
    for (int i = 0; i <= 5; i++)
    {
        for (int i = 1; i < k; i++){
            int key = vetor[i];
            int j = i - 1;
            x1 ++;
            while (j >= 0 && vetor[j] > key) {
                vetor[j + 1] = vetor[j];
                j--;
                x1 ++;
            }
            vetor[j + 1] = key;
        }
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }
    
    // SELECTION SORT
    for (int i = 0; i < k - 1; i++){
        int keym = i;
        y1 ++;
        for (int j = i + 1; j < k; j++){
            if (vetor[j] < vetor[keym]){
                keym = j;
                y1 ++;
            }
        }
        int temp = vetor[keym];
        vetor[keym] = vetor[i];
        vetor[i] = temp;
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }

    // BUBBLE SORT
    for(int i = 0; i < k - 1; i++){
        for (int j = 0; j < k - 1; j++)
        {
            z1++;
            if (vetor[j] > vetor[j + 1]){
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                z1++;
            }
        }
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }

    // Colocando o vetor crescente
    sort(vetor, vetor + n);
    sort(vetorReset, vetorReset + n);

    cout << endl;
    cout << "Vetor: ";
    for (int i = 0; i < k; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    // Coletando os dados do vetor na forma Crescente

    // INSERT SORT
    for (int i = 0; i <= 5; i++)
    {
        for (int i = 1; i < k; i++){
            int key = vetor[i];
            int j = i - 1;
            x0 ++;
            while (j >= 0 && vetor[j] > key) {
                vetor[j + 1] = vetor[j];
                j--;
                x0 ++;
            }
            vetor[j + 1] = key;
        }
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }
    
    // SELECTION SORT
    for (int i = 0; i < k - 1; i++){
        int keym = i;
        y0 ++;
        for (int j = i + 1; j < k; j++){
            if (vetor[j] < vetor[keym]){
                keym = j;
                y0 ++;
            }
        }
        int temp = vetor[keym];
        vetor[keym] = vetor[i];
        vetor[i] = temp;
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }

    // BUBBLE SORT
    for(int i = 0; i < k - 1; i++){
        for (int j = 0; j < k - 1; j++)
        {
            z0++;
            if (vetor[j] > vetor[j + 1]){
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                z0++;
            }
        }
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }

    // Colocando o vetor de forma descrescente
    sort(vetor, vetor + k, comparaDecrescente);
    sort(vetorReset, vetorReset + k, comparaDecrescente);

    cout << endl;
    cout << "Vetor: ";
    for (int i = 0; i < k; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    // Coletando os dados do vetor na forma Decrescente

    // INSERT SORT
    for (int i = 0; i <= 5; i++)
    {
        for (int i = 1; i < k; i++){
            int key = vetor[i];
            int j = i - 1;
            x2 ++;
            while (j >= 0 && vetor[j] > key) {
                vetor[j + 1] = vetor[j];
                j--;
                x2 ++;
            }
            vetor[j + 1] = key;
        }
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }
    
    // SELECTION SORT
    for (int i = 0; i < k - 1; i++){
        int keym = i;
        y2 ++;
        for (int j = i + 1; j < k; j++){
            if (vetor[j] < vetor[keym]){
                keym = j;
                y2 ++;
            }
        }
        int temp = vetor[keym];
        vetor[keym] = vetor[i];
        vetor[i] = temp;
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }

    // BUBBLE SORT
    for(int i = 0; i < k - 1; i++){
        for (int j = 0; j < k - 1; j++)
        {
            z2++;
            if (vetor[j] > vetor[j + 1]){
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                z2++;
            }
        }
    }

    cout << "Dados gerados com sucesso: " << endl;
    cout << "INSERT SORT" << endl << "Na forma crescente: " << x0 << " repetições." << endl << "Na forma aleatória: " << x1 << " repetições." << endl << "Na forma decrescente: " << x2 << " repetições." << endl << endl;

    cout << "SELECTION SORT" << endl << "Na forma crescente: " << y0 << " repetições." << endl << "Na forma aleatória: " << y1 << " repetições." << endl << "Na forma decrescente: " << y2 << " repetições." << endl << endl;

    cout << "BUBBLE SORT" << endl << "Na forma crescente: " << z0 << " repetições." << endl << "Na forma aleatória: " << z1 << " repetições." << endl << "Na forma decrescente: " << z2 << " repetições." << endl << endl;

    cout << "Graficos gerados com sucesso!" << endl;
    return 0;
}
