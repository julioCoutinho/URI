#include <bits/stdc++.h>

using namespace std;

int main()
{

  int min=INT_MAX,pos = 0,n,i=1,x;
  cin >> n;

  while(n-->0)
  {
    cin >> x;
    if(x < min)
    {
      min = x;
      pos = i;
    }
    i++;
  }
  cout << pos << endl;
  return 0;
}
