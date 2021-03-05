#include <bits/stdc++.h>

using namespace std;

int main()
{
  double m[12][12],soma = 0,x;

  int n,i,j;

  cout << fixed << setprecision(1);

  string op;
  cin >> n >> op;

  for(i=0;i<12;i++)
  {
    for(j=0;j<12;j++)
    {
      cin >> x;
      if(j == n)
      {
        soma += x;
      }
    }
  }

  if(op == "S")
  {
    cout << soma << endl;
  }
  else
  {
    cout << soma /12.0 << endl;
  }



  return 0;
}
