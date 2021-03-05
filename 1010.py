a = input()
b = input()
a = a.split()
b = b.split()
preco = (float(a[1]) * float(a[2])) + (float(b[1])* float(b[2]))

print("VALOR A PAGAR: R$ %.2f" % preco)