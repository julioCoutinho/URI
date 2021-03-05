a = int(input())
aux = a
cem = int(a/100)
a = a - cem*100

cinquenta = int(a/50)
a = a - cinquenta*50
vinte = int(a/20)
a = a - vinte*20
dez = int(a/10)
a = a - dez*10
cinco = int(a/5)
a = a - cinco*5
dois = int(a/2)
a = a - dois*2
print("%i" % aux)
print("%i nota(s) de R$ 100,00" % cem)
print("%i nota(s) de R$ 50,00" % cinquenta)
print("%i nota(s) de R$ 20,00" % vinte)
print("%i nota(s) de R$ 10,00" % dez)
print("%i nota(s) de R$ 5,00" % cinco)
print("%i nota(s) de R$ 2,00" % dois)
print("%i nota(s) de R$ 1,00" % a)