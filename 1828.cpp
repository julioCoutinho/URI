#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,i=1;
  string s,r;
  cin >> n;

  while(n-->0)
  {
    cin >> s >> r;

    if(s == "tesoura" && r == "papel")
      cout << "Caso #"<< i <<": Bazinga!" << endl;
    else if(s == "papel" && r == "pedra")
      cout << "Caso #"<< i <<": Bazinga!" << endl;
    else if(s == "pedra" && r == "lagarto")
      cout << "Caso #"<< i <<": Bazinga!" << endl;
    else if(s == "lagarto" && r == "Spock")
      cout << "Caso #"<< i <<": Bazinga!" << endl;
    else if(s == "Spock" && r == "tesoura")
      cout << "Caso #"<< i <<": Bazinga!" << endl;
    else if(s == "tesoura" && r == "lagarto")
      cout << "Caso #"<< i <<": Bazinga!" << endl;
    else if(s == "lagarto" && r == "papel")
      cout << "Caso #"<< i <<": Bazinga!" << endl;
    else if(s == "papel" && r =="Spock")
      cout << "Caso #"<< i <<": Bazinga!" << endl;
    else if(s == "Spock" && r == "pedra" )
      cout << "Caso #"<< i <<": Bazinga!" << endl;
    else if(s == "pedra" && r == "tesoura")
      cout << "Caso #"<< i <<": Bazinga!" << endl;
    else if(r == "tesoura" && s == "papel")
      cout << "Caso #"<< i <<": Raj trapaceou!" << endl;
    else if(r == "papel" && s == "pedra")
      cout << "Caso #"<< i <<": Raj trapaceou!" << endl;
    else if(r == "pedra" && s == "lagarto")
      cout << "Caso #"<< i <<": Raj trapaceou!" << endl;
    else if(r == "lagarto" && s == "Spock")
      cout << "Caso #"<< i <<": Raj trapaceou!" << endl;
    else if(r == "Spock" && s == "tesoura")
      cout << "Caso #"<< i <<": Raj trapaceou!" << endl;
    else if(r == "tesoura" && s == "lagarto")
      cout << "Caso #"<< i <<": Raj trapaceou!" << endl;
    else if(r == "lagarto" && s == "papel")
      cout << "Caso #"<< i <<": Raj trapaceou!" << endl;
    else if(r == "papel" && s =="Spock")
      cout << "Caso #"<< i <<": Raj trapaceou!" << endl;
    else if(r == "Spock" && s == "pedra" )
      cout << "Caso #"<< i <<": Raj trapaceou!" << endl;
    else if(r == "pedra" && s == "tesoura")
      cout << "Caso #"<< i <<": Raj trapaceou!" << endl;
    else
      cout << "Caso #"<< i <<": De novo!" << endl;
    i++;
  }



  return 0;
}
