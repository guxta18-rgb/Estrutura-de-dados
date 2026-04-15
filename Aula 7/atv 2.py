
vertices = ["v0", "v1", "v2", "v3", "v4"]


indice = {v: i for i, v in enumerate(vertices)}


arestas = [
    ("v0", "v1"),
    ("v1", "v2"),
    ("v1", "v3"),
    ("v2", "v3"),
    ("v3", "v4")
]


n = len(vertices)
matriz = [[0]*n for _ in range(n)]


for u, v in arestas:
    i, j = indice[u], indice[v]
    matriz[i][j] = 1
    matriz[j][i] = 1  


print("   ", " ".join(vertices))
for i, linha in enumerate(matriz):
    print(vertices[i], linha)