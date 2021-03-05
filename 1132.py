soma,v=0,[]
v.append(int(input()))
v.append(int(input()))
v.sort()
for i in range(v[0],v[1]+1):
  if ((i%13)!=0):
    soma+=i
print(soma)