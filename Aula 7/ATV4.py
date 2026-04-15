
vertices = ["Elvis Presley", "Fã-1", "Fã-2", "Fã-3", "Não-Fã"]


arestas = [
    ("Fã-1", "Elvis Presley"),
    ("Fã-2", "Elvis Presley"),
    ("Fã-3", "Elvis Presley")
]

lista_adj = {v: [] for v in vertices}

for origem, destino in arestas:
    lista_adj[origem].append(destino)

print("Lista de Adjacência:\n")
for v in lista_adj:
    print(f"{v}: {lista_adj[v]}")


n = len(vertices)
matriz = [[0]*n for _ in range(n)]

indice = {v: i for i, v in enumerate(vertices)}

for origem, destino in arestas:
    i = indice[origem]
    j = indice[destino]
    matriz[i][j] = 1  

print("\nMatriz de Adjacência:\n")
print("   ", vertices)
for i in range(n):
    print(vertices[i], matriz[i])