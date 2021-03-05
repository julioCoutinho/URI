#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a,b,c,d,s;

  cin >> a >> b >> c >> d;

  if(abs(b-c) < a && a < (b+c))
  {
    if(abs(a-c) < b && b < (a+c))
    {
      if(abs(a-b) < c && c < (a+b))
        cout << "S" << endl;
      else
        cout << "N" << endl;
    }
    else
      cout << "N" << endl;
  }
  else if(abs(b-c) < d && d < (b+c))
  {
    if(abs(d-c) < b && b < (d+c))
    {
      if(abs(d-b) < c && c < (d+b))
        cout << "S" << endl;
      else
        cout << "N" << endl;
    }
    else
      cout << "N" << endl;
  }
  else if(abs(d-c) < a && a < (d+c))
  {
    if(abs(a-c) < d && d < (a+c))
    {
      if(abs(a-d) < c && c < (a+d))
        cout << "S" << endl;
      else
        cout << "N" << endl;
    }
    else
      cout << "N" << endl;
  }
  else if(abs(b-d) < a && a < (b+d))
  {
    if(abs(a-d) < b && b < (a+d))
    {
      if(abs(a-b) < d && d < (a+b))
        cout << "S" << endl;
      else
        cout << "N" << endl;
    }
    else
      cout << "N" << endl;
  }
  else
    cout << "N" << endl;
	return 0;
}
