n,v = int(input()),[]
cnt=0
classif = int(input())
for i in range(n):
  v.append(int(input()))
v.sort(reverse=True)
for i in range(n):
  cnt+=1
  if(cnt==classif):
    try:
      while(v[i]==v[i+1]):
        cnt+=1
        i+=1
      break
    except IndexError:
      break
print(cnt)