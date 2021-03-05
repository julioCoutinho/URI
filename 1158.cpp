#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,y,i=0,soma = 0,z;
  cin >>z;
  while(z-->0)
  {
    cin >> n>>y;
    if(n % 2 == 0)
      n++;
    while(i != y)
    {
      soma += n;
      n+=2;
      i++;
    }
    cout << soma << endl;
    i=0;
    soma=0;
  }
  return 0;
}
