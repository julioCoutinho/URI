#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x,y,z;
  string a,b,c,d;

  cin >> n;
  while(n-->0)
  {
    cin >> a >> b >> c >> d;
    cin >> x >> y;
    z = x+y;
    if(z % 2 == 1)
    {
      if(b == "IMPAR")
        cout << a << endl;
      else
        cout << c << endl;
    }
    else
    {
      if(b == "PAR")
        cout << a << endl;
      else
        cout << c << endl;
    }

  }

	return 0;
}
