#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,i = 1,j = 1,k = 1;
  n *=2;

  cin >> n;

  while(n-->0)
  {
    j = pow(i,2);
    k = pow(i,3);
    cout << i << " " << j << " " << k << endl;
    cout << i << " " << j+1 << " " << k+1 << endl;
    i++;
  }

  return 0;
}
