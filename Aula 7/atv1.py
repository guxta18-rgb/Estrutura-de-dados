
arestas = [
    (1, 2),
    (1, 3),
    (3, 2),
    (3, 4),
    (4, 3)
]

vertices = set()
for u, v in arestas:
    vertices.add(u)
    vertices.add(v)


grau_entrada = {v: 0 for v in vertices}
grau_saida = {v: 0 for v in vertices}


for u, v in arestas:
    grau_saida[u] += 1
    grau_entrada[v] += 1


for v in sorted(vertices):
    print(f"Vértice {v}: Entrada = {grau_entrada[v]}, Saída = {grau_saida[v]}")