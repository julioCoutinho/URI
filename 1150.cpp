#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,z,soma,i=1;

  cin >> x >> z;
  while(1)
  {
    if(z > x)
      break;
    else
      cin >> z;
  }
  soma = x;
  while(soma < z)
  {
    x++;
    soma+=x;
    i++;
  }
  cout << i << endl;
  return 0;
}
