#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i=1,j,aux = 0,a=0;
  double m[12][12],x,soma = 0;
  string op;

  cout << fixed << setprecision(1);

  cin >> op;
  for(i=0;i<12;i++)
    for(j=0;j<12;j++)
    {
       cin >> x;
       m[i][j] = x;
    }
  for(i=7;i<12;i++)
  {
    for(j=5-a;j<=i-1;j++)
    {
      soma += m[i][j];
      aux++;
    }
    a++;
  }

  if(op == "S")
  {
    cout << soma << endl;
  }
  else
    cout << soma /aux << endl;

  return 0;
}
