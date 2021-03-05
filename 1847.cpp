#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,y,z,aux1,aux2,aux3,aux4;

  cin >> x >> y >> z;
  aux1 = y-x;
  aux2 = z-y;
  if((y<x) && (z>=y))
    cout << ":)" << endl;
  else if((y>x) && (z<=y))
    cout << ":(" << endl;
  else if((y>x) && (z>y) && (aux1>aux2))
    cout << ":(" << endl;
  else if((y>x) && (z>y) && (aux1<=aux2))
    cout << ":)" << endl;
  else if((y<x) && (z<y) && (abs(aux1)>abs(aux2)))
    cout << ":)" << endl;
  else if ((y<x) && (z<y) && (abs(aux1)<=abs(aux2)))
    cout << ":(" << endl;
  else if((x==y) && (z>y))
    cout << ":)" << endl;
  else
    cout << ":(" << endl;
  return 0;
}
