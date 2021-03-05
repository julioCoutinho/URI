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
  for(i=1;i<6;i++)
  {
    for(j=0;j<i;j++)
    {
      soma += m[i][j];
      aux++;
    }
  }
  a = 4;
  for(i=6;i<11;i++)
  {
    for(j=a;j>=0;j--)
    {
      soma+= m[i][j];
      aux++;
    }
    a--;
  }

  if(op == "S")
  {
    cout << soma << endl;
  }
  else
    cout << soma /aux << endl;

  return 0;
}
