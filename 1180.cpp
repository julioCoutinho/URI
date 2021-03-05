#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x,menor,pos,i=0;
  menor = INT_MAX;

  cin >> n;

  while(n-->0)
  {
    cin >> x;
    if(x < menor)
    {
      menor = x;
      pos = i;
    }
    i++;
  }
    
  cout << "Menor valor: " << menor << endl;
  cout << "Posicao: " << pos << endl;

  return 0;
}
