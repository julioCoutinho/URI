#include <bits/stdc++.h>

using namespace std;

int main()
{
  int gremio = 0,inter = 0,x,y,empate = 0,op,total = 0;
  bool parar=true;
  while(parar)
  {
    cin >> x >> y;
    total++;
    if(x > y)
      inter++;
    else if(x<y)
      gremio++;
    else
      empate++;
    while(1)
    {
      cout << "Novo grenal (1-sim 2-nao)"<<endl;
      cin >> op;
      if(op == 2)
      {
        parar = false;
        break;
      }
      else if(op == 1)
        break;
    }
  }
  cout << total << " grenais" << endl;
  cout << "Inter:" << inter << endl;
  cout << "Gremio:" << gremio << endl;
  cout << "Empates:" << empate << endl;
  if(inter>gremio)
    cout << "Inter venceu mais" << endl;
  else if(gremio>inter)
    cout << "Gremio venceu mais" << endl;
  else
    cout << "Nao houve vencedor" << endl;

  return 0;
}
