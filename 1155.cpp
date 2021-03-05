#include <bits/stdc++.h>

using namespace std;

int main()
{
  double i=1,soma =0;

  cout << fixed << setprecision(2);

  for(i=1;i != 101;i++)
    soma += (1/i);
  cout << soma << endl;

  return 0;
}
