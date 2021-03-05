#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,i=1;

  cin >> n >> m;

  while(m-->0)
  {
    if((i % n == 0) && i!= 1)
      cout << i << endl;
    else
    {
      cout << i << " ";
      if(m == 0)
        cout << endl;
    }
    i++;
  }
  return 0;
}
