#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,pa,pb,i=0,aux;
  double a;
  double g1,g2;

  cin >> n;
  while(n-->0)
  {

    cin >> pa >> pb >> g1 >> g2;
    i=0;
    while(pa <= pb)
    {
      if(i > 100)
      {
        break;
      }
      i++;
      a = pa*(g1/100.0);
      pa += a;
      if(g2  != 0)
      {
        a = pb*(g2/100.0);
        pb += a;
      }

    }
    if(i <= 100)
      cout << i << " anos." << endl;
    else
      cout << "Mais de 1 seculo." << endl;

  }
  return 0;
}
