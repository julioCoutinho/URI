#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,y,maior;
  cin >> x >> y;
  if(x>y)
  {
    maior =x;
    x=y;
    y=maior;
  }
  x++;
  while(x < y)
  {
    if(x % 5 == 2)
      cout << x <<endl;
    else if(x % 5 == 3)
      cout << x << endl;
    x++;
  }
  return 0;
}
