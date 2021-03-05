#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,y,z,total,area;
  double aux;

  while(1)
  {
    cin >> x;
    if(x == 0)
    {
      break;
    }
    cin >> y >> z;
    area = x*y;
    if(z == 100)
    {
      area = sqrt(area);
      cout << area << endl;
    }
    else
    {
      aux = 100.0 / z;
      area = aux * area;
      area = sqrt(area);
      cout << area <<endl;
    }


  }
  return 0;
}
