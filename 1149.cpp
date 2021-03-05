#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,y,i=0,soma = 0;
  cin >> x >> y;
  while(1)
  {
    if(y <= 0)
      cin >> y;
    else
      break;
  }
  while(y!= 0)
  {
    soma += x+i;
    y--;
    i++;
  }
  cout << soma << endl;
  return 0;
}
