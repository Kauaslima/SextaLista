
#include <iostream>
#include <vector>

using namespace std;

void task1() {
    vector<int> vec(10);
    cout << "Insira 10 valores para o vetor: " << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> vec[i];
    }
    cout << "Elementos do vetor:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << vec[i] << endl;
    }
}

void task2() {
    vector<int> vec(7);
    cout << "Insira 7 valores para o vetor: " << endl;
    for (int i = 0; i < 7; ++i) {
        cin >> vec[i];
    }
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += vec[i];
    }
    cout << "Soma dos elementos: " << sum << endl;
}

void task3() {
    int num_alunos_18 = 3;
    int num_alunos_17 = 2;
    int num_alunos_16 = 12;
    int total_alunos = num_alunos_18 + num_alunos_17 + num_alunos_16;
    int soma_idades = (18 * num_alunos_18) + (17 * num_alunos_17) + (16 * num_alunos_16);
    double media = static_cast<double>(soma_idades) / total_alunos;
    cout << "Média das idades: " << media << endl;
}

void task4() {
    vector<int> valores = { 5, 9, 7, 10, 15, 23, 20, 30 };
    int total = 0;
    for (int i = 0; i < valores.size(); ++i) {
        total += valores[i];
    }
    cout << "Total depositado: " << total << endl;
}

void task5() {
    vector<int> vec(10);
    cout << "Insira 10 valores para o vetor: " << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> vec[i];
    }
    int opcao;
    cout << "Escolha uma opcao:" << endl;
    cout << "1 - Somar todos os elementos" << endl;
    cout << "2 - Subtrair todos os elementos" << endl;
    cout << "3 - Multiplicar todos os elementos" << endl;
    cin >> opcao;

    int resultado;
    if (opcao == 1) {
        resultado = 0;
        for (int i = 0; i < 10; ++i) {
            resultado += vec[i];
        }
        cout << "Soma dos elementos: " << resultado << endl;
    }
    else if (opcao == 2) {
        resultado = vec[0];
        for (int i = 1; i < 10; ++i) {
            resultado -= vec[i];
        }
        cout << "Subtracao dos elementos: " << resultado << endl;
    }
    else if (op