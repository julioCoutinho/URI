#include <bits/stdc++.h>

using namespace std;

int main()
{
  int op;
  double x,y,media;
  bool valido = false;
  while(op != 2)
  {
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
    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> op;
    valido = false;
    media = 0;
    while(1)
    {
      if(op == 1)
        break;
      else if(op == 2)
        break;
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> op;
    }
  }
  return 0;
}
