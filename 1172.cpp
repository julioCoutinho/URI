#include <bits/stdc++.h>

using namespace std;

int main()
{
  int v[10],i =0,x;
  while(i != 10)
  {
    cin >> x;
    if(x <= 0)
      v[i] = 1;
    else
      v[i] = x;
    cout << "X[" << i << "] = " << v[i] << endl;
    i++;
  }
  return 0;
}
