v=[]
for i in range(int(input())):
  v.append([float(x) for x in input().split()])
for i in range(len(v)):
  print(round(v[i][0]*2 + v[i][1]*3 + v[i][2]*5)/10)