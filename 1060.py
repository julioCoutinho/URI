cnt,v=0,[]
for i in range(6):
  v.append(float(input()))
  if(v[i]>0): cnt+=1
print('{} valores positivos'.format(cnt))