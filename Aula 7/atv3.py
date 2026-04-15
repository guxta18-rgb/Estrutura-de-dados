
vertices = ["João", "Paulo", "Maria", "Joana", "Antonia", "Lili", "Raimundo"]


arestas = [
    ("João", "Paulo"),
    ("Paulo", "Maria"),
    ("Paulo", "Joana"),
    ("Paulo", "Antonia"),
    ("Paulo", "Lili"),
    ("Maria", "Joana"),
    ("Joana", "Antonia"),
    ("Antonia", "Lili")
]



lista_adj = {v: [] for v in vertices}

for v1, v2 in arestas:
    lista_adj[v1].append(v2)
    lista_adj[v2].append(v1)  

print("Lista de Adjacência:\n")
for v in lista_adj:
    print(f"{v}: {lista_adj[v]}")


n = len(vertices)
matriz = [[0]*n for _ in range(n)]


indice = {v: i for i, v in enumerate(vertices)}

for v1, v2 in arestas:
    i, j = indice[v1], indice[v2]
    matriz[i][j] = 1
    matriz[j][i] = 1 

print("\nMatriz de Adjacência:\n")
print("   ", vertices)
for i in range(n):
    print(vertices[i], matriz[i])