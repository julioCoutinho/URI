#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,i=1;
  cin >> n;
  while(n != 0)
  {
    for(i=1;i<=n;i++)
      if(i != n)
        cout << i << " ";
      else
        cout << i << endl;
    cin >> n;
  }



  return 0;
}
