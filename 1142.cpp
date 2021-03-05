#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,i=1;

  cin >> x;
  x*=4;
  while(x-->0)
  {
    if(i%4 == 0)
      cout << "PUM" << endl;
    else
      cout << i << " ";
    i++;
  }
  return 0;
}
