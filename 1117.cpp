#include <bits/stdc++.h>

using namespace std;

int main()
{
  double x,y,media;
  bool valido = false;

  cout << fixed << setprecision(2);

  while(!valido)
  {
    cin >> x;
    if(x >= 0 && x<= 10)
      valido = true;
    else
      cout << "nota invalida" << endl;
  }
  valido = false;
  while(!valido)
  {
    cin >> y;
    if(y >= 0 && y<= 10)
      valido = true;
    else
      cout << "nota invalida" << endl;
  }
  media = (x+y)/2;
  cout << "media = " << media << endl;
  return 0;
}
