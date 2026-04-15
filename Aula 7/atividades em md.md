# Grafos - Atividades

## ATV 1

### Arestas direcionadas

1 → 2  
1 → 3  
3 → 2  
3 → 4  
4 → 3  

### Graus dos vértices

| Vértice | Grau de Entrada (in) | Grau de Saída (out) |
|---------|----------------------|---------------------|
| 1       | 0                    | 2                   |
| 2       | 2                    | 0                   |
| 3       | 2                    | 2                   |
| 4       | 1                    | 1                   |

---

## ATV 2

### Arestas identificadas (grafo não direcionado)

v0 — v1  
v1 — v2  
v1 — v3  
v2 — v3  
v3 — v4  

### Matriz de adjacência

|     | v0 | v1 | v2 | v3 | v4 |
|-----|----|----|----|----|----|
| v0  | 0  | 1  | 0  | 0  | 0  |
| v1  | 1  | 0  | 1  | 1  | 0  |
| v2  | 0  | 1  | 0  | 1  | 0  |
| v3  | 0  | 1  | 1  | 0  | 1  |
| v4  | 0  | 0  | 0  | 1  | 0  |

### Observando as ligações

João ↔ Paulo
Paulo ↔ Maria
Paulo ↔ Joana
Paulo ↔ Antonia
Paulo ↔ Lili
Maria ↔ Joana
Joana ↔ Antonia
Antonia ↔ Lili
Raimundo → isolado (sem conexões)

### Lista de Adjacência

João: [Paulo]
Paulo: [João, Maria, Joana, Antonia, Lili]
Maria: [Paulo, Joana]
Joana: [Paulo, Maria, Antonia]
Antonia: [Paulo, Joana, Lili]
Lili: [Paulo, Antonia]
Raimundo: []

### Matriz de Adjacência

Ordem dos vértices:
[João, Paulo, Maria, Joana, Antonia, Lili, Raimundo]

          J   P   M   Jn  A   L   R
João      0   1   0   0   0   0   0
Paulo     1   0   1   1   1   1   0
Maria     0   1   0   1   0   0   0
Joana     0   1   1   0   1   0   0
Antonia   0   1   0   1   0   1   0
Lili      0   1   0   0   1   0   0
Raimundo  0   0   0   0   0   0   0

### ATV4

### Vértices (nós)

Elvis Presley
Fã-1
Fã-2
Fã-3
Não-Fã
🔗 Arestas (direcionadas)

Pelo desenho:

Fã-1 → Elvis Presley
Fã-2 → Elvis Presley
Fã-3 → Elvis Presley
Não-Fã → (nenhuma ligação)

👉 Importante: não é bidirecional, só vai no sentido da seta.

✅ Lista de Adjacência (GRAFO DIRECIONADO)
Elvis Presley: []
Fã-1: [Elvis Presley]
Fã-2: [Elvis Presley]
Fã-3: [Elvis Presley]
Não-Fã: []
✅ Matriz de Adjacência

Ordem dos vértices:
[Elvis, Fã-1, Fã-2, Fã-3, Não-Fã]

             E   F1  F2  F3  NF
Elvis        0   0   0   0   0
Fã-1         1   0   0   0   0
Fã-2         1   0   0   0   0
Fã-3         1   0   0   0   0
Não-Fã       0   0   0   0   0
