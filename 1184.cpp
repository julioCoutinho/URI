#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i=1,j;
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
  for(i=0;i<12;i++)
  {
    for(j=0;j<12;j++)
    {
      if(i > j)
      {
        soma += m[i][j];
      }
    }
  }

  if(op == "S")
  {
    cout << soma << endl;
  }
  else
    cout << soma /66.0 << endl;

  return 0;
}
