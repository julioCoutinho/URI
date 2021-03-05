#include <bits/stdc++.h>

using namespace std;

int main()
{
  double x,v[100];
  int i=1;
  cin >> x;
  cout << fixed << setprecision(4);
  v[0] = x;
  cout << "N[0] = " << x << endl;
  while(i != 100)
  {
    v[i] = v[i-1] / 2;
    cout << "N[" << i << "] = " << v[i] << endl;
    i++;
  }

  return 0;
}
