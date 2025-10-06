#include <iostream>
#include <vector>
#include <tuple>

#define ll long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

// Implementação Padrão da Árvore de Fenwick (BIT)
template <typename T>
struct FenwickTree {
    int size;
    std::vector<T> tree;

    FenwickTree(int sz) : size(sz), tree(sz + 1, 0) {}

    void add(int idx, T delta) {
        for (; idx <= size; idx += idx & -idx) {
            tree[idx] += delta;
        }
    }

    T query(int idx) {
        T sum = 0;
        for (; idx > 0; idx -= idx & -idx) {
            sum += tree[idx];
        }
        return sum;
    }
};

// Estrutura para armazenar as queries lidas
struct Query {
    int type;
    int p1, p2;
    ll p3;
};

// Estrutura para as sub-consultas que faremos na BIT
struct SubQuery {
    int col;
    int ans_idx;
    int sign; // +1 para adicionar, -1 para subtrair
};

int main() {
    fast_io();
    int n, m, q_count;
    std::cin >> n >> m >> q_count;

    std::vector<Query> queries(q_count);
    std::vector<long long> answers(q_count, 0); // Onde guardaremos as respostas finais
    int type3_counter = 0;

    // 1. Ler e armazenar todas as queries
    for (int k = 0; k < q_count; ++k) {
        std::cin >> queries[k].type;
        if (queries[k].type == 1) {
            std::cin >> queries[k].p1 >> queries[k].p2 >> queries[k].p3;
        } else if (queries[k].type == 2) {
            std::cin >> queries[k].p1 >> queries[k].p3;
        } else {
            std::cin >> queries[k].p1 >> queries[k].p2;
            queries[k].p3 = type3_counter++; // Guardar o índice original da resposta
        }
    }

    // 2. Pré-processar para saber a última vez que cada linha foi alterada (Query Tipo 2)
    std::vector<int> last_set_time(n + 1, -1); // -1 significa que nunca foi alterada
    std::vector<ll> last_set_val(n + 1, 0);
    for (int k = 0; k < q_count; ++k) {
        if (queries[k].type == 2) {
            last_set_time[queries[k].p1] = k;
            last_set_val[queries[k].p1] = queries[k].p3;
        }
    }

    // 3. Agrupar as sub-consultas por tempo
    std::vector<std::vector<SubQuery>> sub_queries_by_time(q_count);
    for (int k = 0; k < q_count; ++k) {
        if (queries[k].type == 3) {
            int row = queries[k].p1;
            int col = queries[k].p2;
            int ans_idx = queries[k].p3;
            
            int set_time = last_set_time[row];
            
            // O valor base é o da última substituição de linha
            answers[ans_idx] = last_set_val[row];
            
            // Agendamos a parte positiva: + (soma das colunas em k)
            sub_queries_by_time[k].push_back({col, ans_idx, 1});
            
            // Se a linha já foi substituída alguma vez, agendamos a parte negativa:
            // - (soma das colunas em set_time)
            if (set_time != -1) {
                sub_queries_by_time[set_time].push_back({col, ans_idx, -1});
            }
        }
    }

    // 4. Iterar no tempo, atualizar a BIT e responder às sub-consultas agendadas
    FenwickTree<ll> bit(m);
    for (int k = 0; k < q_count; ++k) {
        // Primeiro, aplicamos as queries Tipo 1 do tempo k na BIT
        if (queries[k].type == 1) {
            bit.add(queries[k].p1, queries[k].p3);
            if (queries[k].p2 + 1 <= m) {
                bit.add(queries[k].p2 + 1, -queries[k].p3);
            }
        }
        
        // Agora, respondemos a todas as sub-consultas agendadas para o tempo k
        for (const auto& sub_q : sub_queries_by_time[k]) {
            ll col_sum = bit.query(sub_q.col);
            answers[sub_q.ans_idx] += col_sum * sub_q.sign;
        }
    }

    // 5. Imprimir as respostas na ordem correta
    for (int i = 0; i < type3_counter; ++i) {
        std::cout << answers[i] << "\n";
    }

    return 0;
}