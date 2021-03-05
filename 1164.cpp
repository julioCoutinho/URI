#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,soma,x,i=1;
  cin  >> n;
  while(n-->0)
  {
    cin >> x;
    soma = 0;i=1;
    while(i <= x/2)
    {
      if(x % i == 0)
        soma+=i;
      i++;
    }
    if(soma == x)
      cout << x << " eh perfeito" << endl;
    else
      cout << x << " nao eh perfeito" << endl;
  }

  return 0;
}
