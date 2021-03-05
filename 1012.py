a = input()
a = a.split()
a[0] = float(a[0])
a[1] = float(a[1])
a[2] = float(a[2])

pi = 3.14159

t = (a[0]*a[2])/2
c = (a[2]*a[2])*pi
tr = ((a[0]+a[1])/2)*a[2]
q = a[1]*a[1]
r = a[1]*a[0]

print("TRIANGULO: %.3f" % t)
print("CIRCULO: %.3f" % c)
print("TRAPEZIO: %.3f" % tr)
print("QUADRADO: %.3f" % q)
print("RETANGULO: %.3f" % r)