#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,v[500],i;
  cin >> n;
  v[1] = 0;
  v[2] = 1;
  if(n == 1)
    cout << "0" << endl;
  else if(n == 2)
    cout << "0 1" << endl;
  else
  {
    cout << v[1] << " " << v[2] << " ";
    for(i = 3;i <= n;i++)
    {
      v[i] = v[i-1] + v[i-2];
      if(i==n)
        cout << v[i] << endl;
      else
        cout << v[i] << " ";
    }
  }

  return 0;
}
