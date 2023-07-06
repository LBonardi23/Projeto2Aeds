#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

// Nomes e RA: Leonardo Bonardi Marques Silva 2023.1.08.011 e Vinícuius Henrique Piotto 2023.1.08.024. Trabalho de AEDs I sobre métodos de ordenação, data máxima de entrega 07/06/2023. Professor Paulo Bressan.

using namespace std;

// Função que retorna um valor booleano para criar o vetor de maneira decrescente
bool comparaDecrescente(int a, int b) {
    return a > b;
}

// Função que retorna valores booleanos para verificar se o numero aleatório gerado já existe no vetor
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
    int k;              //Variável para comparação entre os vetores.
    int n;              //Variável para comparação entre os vetores.
    int opcaotam;       //Variável para a opção de tamanho.
    int x0 = 0;         //Variável de contagem para Insert.
    int x1 = 0;         //Variável de contagem para Insert.
    int x2 = 0;         //Variável de contagem para Insert.
    int y0 = 0;         //Variável de contagem para Selection.
    int y1 = 0;         //Variável de contagem para Selection.
    int y2 = 0;         //Variável de contagem para Selection.
    int z0 = 0;         //Variável de contagem para Bubble.
    int z1 = 0;         //Variável de contagem para Bubble.
    int z2 = 0;         //Variável de contagem para Bubble.
    srand(time(0));     //Comando para que os números aleatórios gerados não se repitam.

    //Cout's para a seleção do tamanho do vetor.
    cout << "Selecione um tamanho para o vetor: " << endl;
    cout << "1. 100 posições" << endl;
    cout << "2. 1000 posições" << endl;
    cout << "3. 100000 posições" << endl;
    cout << "Digite o numero da opção desejada: ";
    //Cin para selecionar o tamanho do vetor.
    cin >> opcaotam;

    //Switch para os tamanhos dos vetores.
    switch (opcaotam) {
        case 1:     //Opção para tamanho = 100.
            cout << "100 posições selecionado." << endl;
            n = 100;
            k = 100;
            break;

        case 2:     //Opção para tamanho = 1000.
            cout << "1000 posições selecionado." << endl;
            n = 1000;
            k = 1000;
            break;

        case 3:     //Opção para tamanho = 10000
            cout << "10000 posições selecionado." << endl;
            k = 10000;
            n = 10000;
            break;

        default:    //Opção caso nenhuma das alternativas sejam selecionadas, ocasinando em um erro.
            cout << "Tamanho invalido!" << endl;
            break;
    }
    cout << endl;
    
    // Gerando um vetor aleatório sem repetir números
    int vetor[n];
    int vetorReset[n];      //Vetor secundário que será utilizado para resetar o vetor primário.
    for (int i = 0; i < n; i++) {
        int numero;
        do {
            numero = rand() % 1000000;
        } while (numeroJaGerado(vetor, i, numero));

        vetor[i] = numero;  //Setando os mesmos valores para ambos.
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
                x1 = x1 + 3;
            }
            vetor[j + 1] = key;
            x1 ++;
        }
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }
    
    // SELECTION SORT
    for (int i = 0; i < k - 1; i++){
        int keym = i;
        for (int j = i + 1; j < k; j++){
            if (vetor[j] < vetor[keym]){
                keym = j;
                y1 = y1 + 2;
            }
        }
        int temp = vetor[keym];
        vetor[keym] = vetor[i];
        vetor[i] = temp;
        y1 = y1 + 4;
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }

    // BUBBLE SORT
    for(int i = 0; i < k - 1; i++){
        for (int j = 0; j < k - 1; j++)
        {
            if (vetor[j] > vetor[j + 1]){
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                z1 = z1 + 4;
            }
            z1 = z1 + 2;
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
                x0 = x0 + 3;
            }
            vetor[j + 1] = key;
            x0++;
        }
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }
    
    // SELECTION SORT
    for (int i = 0; i < k - 1; i++){
        int keym = i;
        for (int j = i + 1; j < k; j++){
            if (vetor[j] < vetor[keym]){
                keym = j;
            }
            y0 = y0 + 2;
        }
        int temp = vetor[keym];
        vetor[keym] = vetor[i];
        vetor[i] = temp;
        y0 = y0 + 4;
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }

    // BUBBLE SORT
    for(int i = 0; i < k - 1; i++){
        for (int j = 0; j < k - 1; j++)
        {
            if (vetor[j] > vetor[j + 1]){
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                z0 = z0 + 4;
            }
            z0 = z0 + 2;
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
                x2 = x2 + 3;
            }
            vetor[j + 1] = key;
            x2++;
        }
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }
    
    // SELECTION SORT
    for (int i = 0; i < k - 1; i++){
        int keym = i;
        for (int j = i + 1; j < k; j++){
            if (vetor[j] < vetor[keym]){
                keym = j;
                y2 = y2 + 2;
            }
        }
        int temp = vetor[keym];
        vetor[keym] = vetor[i];
        vetor[i] = temp;
        y2 = y2 + 4;
    }
    // Resetando o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = vetorReset[i];
    }

    // BUBBLE SORT
    for(int i = 0; i < k - 1; i++){
        for (int j = 0; j < k - 1; j++)
        {
            if (vetor[j] > vetor[j + 1]){
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                z2 = z2 + 4;
            }
            z2 = z2 + 2;
        }
    }
    //Cout's finais após as contagens das ordenações.

    cout << "Dados gerados com sucesso: " << endl;

    cout << "INSERT SORT" << endl << "Na forma crescente: " << x0 << " repetições." << endl << "Na forma aleatória: " << x1 << " repetições." << endl << "Na forma decrescente: " << x2 << " repetições." << endl << endl;

    cout << "SELECTION SORT" << endl << "Na forma crescente: " << y1 << " repetições." << endl << "Na forma aleatória: " << y2 << " repetições." << endl << "Na forma decrescente: " << y0 << " repetições." << endl << endl;

    cout << "BUBBLE SORT" << endl << "Na forma crescente: " << z0 << " repetições." << endl << "Na forma aleatória: " << z1 << " repetições." << endl << "Na forma decrescente: " << z2 << " repetições." << endl << endl;

    cout << "Graficos gerados com sucesso!" << endl;
    
    return 0;
}
