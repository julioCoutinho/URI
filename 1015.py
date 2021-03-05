a = input()
b = input()

a = a.split()
b = b.split()

dist = ((float(a[0])-float(b[0]))**2 + (float(a[1])-float(b[1]))**2)
dist = dist **0.5

print("%.4f" % dist)