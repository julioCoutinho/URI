a = int(input())
v=[int(x) for x in input().split()]
v1=v[:a]
print('Menor valor: {}'.format(min(v1)))
print('Posicao: {}'.format(v1.index(min(v1))))