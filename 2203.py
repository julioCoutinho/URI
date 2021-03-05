import math as m
while(True):
  try:
    v = [float(x) for x in input().split()]
    dist = ( m.sqrt( abs(v[0]-v[2])**2 + abs(v[1]-v[3])**2 ) )
    if (dist+v[4]*1.5>v[5]+v[6]):
      print('N')
    else: 
      print('Y')
  except EOFError:
    break
