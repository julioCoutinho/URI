a = input()

a = a.split()

a[0] = float(a[0])
a[1] = float(a[1])
a[2] = float(a[2])

maiorab = (a[0]+a[1]+abs(a[0]-a[1]))/2

if(maiorab > a[2]):
  print("%i eh o maior" % maiorab)
else:
  print("%i eh o maior" % a[2])