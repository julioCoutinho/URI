#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,y,maior,soma = 0;
  cin >> x >> y;
  if(x>y)
  {
    maior = x;
    x = y;
    y = maior;
  }
  while(x <= y)
  {
    if(x % 13 != 0)
    {
      soma += x;
    }
    x++;
  }
  cout << soma << endl;
  return 0;
}
