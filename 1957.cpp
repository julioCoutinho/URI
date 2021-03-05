#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,resto,valor;
  string a;
  cin >> x;
  vector <string> v;
  while(x > 0)
  {
    resto = x % 16;
    x = x / 16;
    stringstream ss;
    ss << resto;
    a = ss.str();
    if(resto <= 9)
      v.push_back(a);
    else if(resto == 10)
      v.push_back("A");
    else if(resto == 11)
      v.push_back("B");
    else if(resto == 12)
      v.push_back("C");
    else if(resto == 13)
      v.push_back("D");
    else if(resto == 14)
      v.push_back("E");
    else if(resto == 15)
      v.push_back("F");
  }


  reverse(v.begin(),v.end());

  for(int i = 0;i < v.size();i++)
  {
    cout << v[i];
  }
  cout << endl;
	return 0;
}
