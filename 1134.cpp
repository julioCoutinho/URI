#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x=0,gas=0,al=0,die=0;
  while(1)
  {
    while(1)
    {
      cin >> x;
      if((x>=0) && (x<=4))
        break;
    }
    if(x == 1)
      al++;
    else if(x == 2)
      gas++;
    else if(x == 3)
      die++;
    else break;
  }
  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << al << endl;
  cout << "Gasolina: " << gas << endl;
  cout << "Diesel: "<< die << endl;
  return 0;
}
