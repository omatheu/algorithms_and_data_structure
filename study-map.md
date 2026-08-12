# Study Map — Estruturas de Dados & Algoritmos

Mapa de aprendizado deste repo. Cruza **duas fontes**:

1. **Roadmap do W3Schools DSA** — <https://www.w3schools.com/dsa/> — a ordem e o escopo do currículo que estou seguindo (tem conteúdo + exercícios de fixação).
2. **Lista do meu Engineering Manager** (take-away do 1:1) — os temas que o trabalho real exige, em ordem de prioridade.

> **Para que serve:** é a fonte de verdade do *que já cobri / estou cobrindo / falta*. O `/engineer-quiz`, o `/general-quiz` e o `study-track.md` (no `right-way-to-use-ai`) devem consultar este arquivo para escolher temas e calibrar profundidade. Atualizo o status aqui sempre que fecho um tópico (idealmente junto de um `/save-report`).

## Legenda de status

| Status | Significado |
|---|---|
| ✅ | Estudado + tenho evidência (código no repo e/ou Domain Report). |
| 🔄 | Em andamento — comecei, mas ainda não fechei (sem report ou sem implementar). |
| ⬜ | Ainda não iniciado. |

Profundidade pelo ruler de 5 níveis do coach (Recognition → Usage → Justification → Implementation → Trade-offs). O alvo de 6 meses para Data Structures é **Nível 4 (implementar)**; ver `right-way-to-use-ai/study-track.md`.

---

## Fonte 1 — Roadmap W3Schools DSA

| # | Tópico | Status | Nível | Evidência no repo / nota |
|---|---|---|---|---|
| **Intro** | DSA Intro · Simple Algorithm | 🔄 | 1 | Conceito de eficiência × complexidade em `data-structures/notation.md`. |
| **Arrays** | Arrays / vetores | 🔄 | 2–3 | `cpp/vectors.cpp`; Domain Report *std::vector e memória dinâmica* (16/06). |
| | Bubble / Selection / Insertion Sort | ⬜ | — | |
| | Quick Sort · Merge Sort | ⬜ | — | |
| | Counting Sort · Radix Sort | ⬜ | — | |
| | Linear Search · Binary Search | ⬜ | — | |
| **Linked Lists** | Linked List + na memória + tipos + operações | ⬜ | — | Bate com item 4 do EM (implementar sem lib). |
| **Stacks & Queues** | Stack | 🔄 | 1–2 | `data-structures/stack.cpp`; identifico/descrevo, falta fechar implementação (17/06). |
| | Queue | 🔄 | 1–2 | `data-structures/queue-learning.py`. |
| **Hash Tables** | Hash Tables · Hash Sets · Hash Maps | ⬜ | — | Bate com item 6 do EM (dicionários/maps). |
| **Trees** | Trees · Binary Trees | ⬜ | — | |
| | Pre / In / Post-order Traversal | ⬜ | — | |
| | Array Implementation · BST · AVL | ⬜ | — | |
| **Graphs** | Graphs · Implementation | 🔄 | 1–2 | `cpp/depency-solver.cpp`; cluster de grafos na fila ([[graph-algos-study-cluster]]). |
| | Graph Traversal (DFS/BFS) · Cycle Detection | ⬜ | — | Na `future-study-queue.md`. |
| **Shortest Path** | Shortest Path · Dijkstra · Bellman-Ford | ⬜ | — | Na fila (track paralelo "Algorithms for Leverage"). |
| **Min Spanning Tree** | MST · Prim · Kruskal | ⬜ | — | |
| **Maximum Flow** | Max Flow · Ford-Fulkerson · Edmonds-Karp | ⬜ | — | Na fila (flow/matching). |
| **Time Complexity** | Big-O + por algoritmo | 🔄 | 2 | `data-structures/notation.md` + imagens Big-O (conceito feito; falta por-algoritmo). |
| **Reference** | Euclidean · Huffman · TSP · 0/1 Knapsack | ⬜ | — | |
| | Memoization · Tabulation · DP · Greedy | ⬜ | — | DP/Greedy estão no track paralelo. |

---

## Fonte 2 — Lista do Engineering Manager (ordem de prioridade do 1:1)

| # | Tema | Status | Nível | Mapeia para (W3Schools / mês) |
|---|---|---|---|---|
| 1 | Ponteiros para variáveis em C++ | 🔄 | 1–2 | **Gap de aplicação:** conceito discutido 10/06, mas 0/4 no Baseline Assessment (18/06) — `*`/`&`, `++*p`, o que o ponteiro guarda. Reconhecimento ≠ aplicação. Maior leverage agora. |
| 2 | Array / vetor | 🔄 | 2–3 | Arrays · Report std::vector (16/06). |
| 3 | Struct | ⬜ | — | — · pré-requisito da linked list. |
| 4 | Lista ligada implementada à mão (sem lib) | ⬜ | — | Linked Lists · Mês 4 (C++ via DS). |
| 5 | Filas e pilhas | 🔄 | 1–2 | Stacks & Queues (ver Fonte 1). |
| 6 | Dicionários / maps | ⬜ | — | Hash Tables. |
| 7 | Alocação de memória (alloc/free, `new`/`delete`) | 🔄 | 2–3 | Report *std::vector e memória dinâmica* + stack vs heap discutido (16/06). |
| 8 | Ciclo de vida de uma Activity (Android) | ⬜ | — | Pilar Mobile Lifecycle · Mês 5. |
| 9 | Ciclo de vida de um ViewController (iOS) | ⬜ | — | Pilar Mobile Lifecycle · Mês 5. |
| 10 | OOP: instância × classe, construtores, classe estática, herança × interface, níveis de acesso | ⬜ | — | C++/Design · transversal aos Meses 2–4. |
| 11 | Design Patterns: Singleton, Factory | ⬜ | — | Pilar Design Patterns · Meses 2–3. |

> **Acordo do 1:1:** nos próximos 1:1s, mostrar ao EM as perguntas do `/engineer-quiz` e o que aprendi em cada uma. Os Domain Reports em `right-way-to-use-ai/domain-reports/` são essa evidência datada.

---

## Coverage — onde os dois roadmaps se encontram

- **Já tenho tração** nos fundamentos de C++ (ponteiros, vetores, memória) e comecei as estruturas lineares (stack, queue) + grafos pelo `depency-solver`. Esses são exatamente os itens 1–2, 5, 7 do EM.
- **Próximo passo natural** (interseção das duas listas, maior leverage): fechar **stack + queue** (implementação, não só descrição) → **struct** → **linked list à mão**. É a sequência do EM e cobre o bloco Stacks/Queues + Linked Lists do W3Schools de uma vez.
- **Hash Tables / maps** (item 6 do EM) é o bloco isolado mais alavancado depois disso — universal no backend e no client.
- **Mobile lifecycle e Design Patterns** (itens 8–11) são deliberadamente Meses 2–5; não puxar agora — se surgir curiosidade, vai pra `future-study-queue.md`, não pra este mês.

> Regra de decisão de cada tópico (do coach): *"que decisão esse conhecimento desbloqueia agora?"* Se nenhuma → fila, não este mês. **Progresso > completude.**
