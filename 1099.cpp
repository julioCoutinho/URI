#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x,y,aux,soma = 0;
  cin >> n;
  while(n-->0)
  {
    cin >> x >> y;
    if(x > y)
    {
      aux = x;
      x = y;
      y = aux;
    }
    aux = x;
    aux ++;
    if(aux % 2 == 0)
      aux ++;
    while(aux < y)
    {
      if(aux % 2 == 1)
        soma += aux;

      aux +=2;
    }
    cout << soma << endl;
    soma = 0;
  }
  return 0;
}
