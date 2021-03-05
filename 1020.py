a = int(input())

anos = int(a/365)
a = a%365
meses = int(a/30)
a = a%30

print("%i ano(s)" % anos)
print("%i mes(es)" % meses)
print("%i dia(s)" % a)