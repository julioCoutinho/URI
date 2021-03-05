#include <bits/stdc++.h>

using namespace std;

int main()
{
  double x,soma = 0,i=0;

  cout << fixed << setprecision(2);

  while(cin >> x)
  {
    if(x<=0)
      break;
    soma += x;
    i++;
  }
  soma /=i;
  cout << soma << endl;

  return 0;
}
