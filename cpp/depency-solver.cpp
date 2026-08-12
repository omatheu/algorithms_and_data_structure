#include <iostream>
#include <unordered_map>

// Usando coloração de grafos para detectar ciclos em um grafo direcionado
enum class NodeState {
    UNVISITED,
    VISITING,
    VISITED
};

class DependencyResolver {
    private:
        // O grafo é representado como uma lista de adjacências: Módulo -> Lista de dependências
        std::unordered_map<std::string, std::vector<std::string>> graph;
        std::unordered_map<std::string, NodeState> nodeStates;
        std::vector<std::string> order;

        // Função recursiva para realizar DFS e detectar ciclos. Ela retorna true se um ciclo for detectado.
        bool dfsHasCycle(const std::string& node) {
            nodeStates[node] = NodeState::VISITING;
            
            for (const auto& neighbor : graph[node]) {
                if (nodeStates[neighbor] == NodeState::VISITING) {
                    return true;
                }
                if (nodeStates[neighbor] == NodeState::UNVISITED && dfsHasCycle(neighbor)) {
                    return true;
                }
            }

            nodeStates[node] = NodeState::VISITED;
            order.push_back(node);
            return false;
        }
    public:
    // Métodos para adicionar dependências e resolver a ordem de compilação
};

int main () {

    return 0;
};