#include <bits/stdc++.h>

using namespace std;

int main()
{
  double i=1,j=1,soma = 0;

  cout << fixed<<setprecision(2);

  while(i!=39)
  {
    soma += (i/j);
    i+=2;j*=2;
  }
  cout << soma << endl;
  return 0;
}
