#include <bits/stdc++.h>

using namespace std;

int main()
{
  double n,x,y;
  double div;
  cout << fixed << setprecision(1);
  cin >> n;
  while(n-->0)
  {
    cin >> x >> y;
    if(y != 0)
    {
      div = x/y;
      cout << div << endl;
    }
    else
      cout << "divisao impossivel" << endl;
  }
  return 0;
}
