#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,y,maior;

  while(cin >> x >> y)
  {
    if((x <= 0) || (y<=0))
    {
      break;
    }
    if(x > y)
    {
      maior = x;
      x = y;
      y = maior;
    }
    maior = 0;
    while(x <= y)
    {
      cout << x << " ";
      maior += x;
      x++;
    }
    cout << "Sum=" << maior << endl;
  }
  return 0;
}
