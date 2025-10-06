#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

// Função para resolver um único caso de teste
void solve() {
    int n;
    std::cin >> n;

    // Passo 2 (Agrupamento): Agrupa os índices com base nos valores de b.
    // A chave do mapa é o valor em b (k), e o valor é um vetor de índices.
    std::map<int, std::vector<int>> groups;
    for (int i = 0; i < n; ++i) {
        int b_val;
        std::cin >> b_val;
        groups[b_val].push_back(i);
    }

    // Passo 1 (Verificação): Verifica se a construção é possível.
    for (auto const& pair : groups) {
        int k = pair.first; // O valor de b (a frequência exigida)
        int count = pair.second.size(); // Quantas vezes k apareceu em b

        // A contagem de k deve ser um múltiplo de k.
        if (count % k != 0) {
            std::cout << -1 << std::endl;
            return; // Se não for, é impossível. Encerra a função.
        }
    }

    // Se chegamos aqui, uma solução existe.

    // Passo 3 (Construção): Constrói o array 'a'.
    std::vector<int> a(n);
    int current_val = 1; // Contador para os novos valores a serem inseridos em 'a'

    // Itera sobre cada grupo (ex: grupo do k=1, grupo do k=2, etc.)
    for (auto const& pair : groups) {
        int k = pair.first;
        const std::vector<int>& indices = pair.second;

        // Itera sobre a lista de índices do grupo atual.
        // A cada 'k' índices, um novo valor é usado.
        int count_in_chunk = 0;
        for (int index : indices) {
            a[index] = current_val;
            count_in_chunk++;

            // Se completamos um bloco de tamanho k, passamos para o próximo valor.
            if (count_in_chunk == k) {
                current_val++;
                count_in_chunk = 0;
            }
        }
    }

    // Imprime o array 'a' resultante.
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << (i == n - 1 ? "" : " ");
    }
    std::cout << std::endl;
}

int main() {
    // Acelera a leitura e escrita de dados
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}