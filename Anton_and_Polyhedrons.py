t = int(input())
faces = {
    "Tetrahedron":4,
    "Cube":6,
    "Octahedron":8,
    "Dodecahedron":12,
    "Icosahedron":20
}
res = 0

for i in range(t):
    figure = input()
    res += faces[figure]

print(res)