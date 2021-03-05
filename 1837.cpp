#include <bits/stdc++.h>

using namespace std;

int main()
{
  int b,a,q,r,i=1;
  cin >> a >> b;
  if(a%b == 0)
  {
    q = a/b;
    cout << q << " 0"<<endl; 
  }
  else
  {
    if(a < 0)
    {
      if(b > 0)
      {
        q = a / b;
        q-=1;
        r = a - b*q;
        cout << q << " " << r << endl;
      }
      else
      {
          q = a / b;
          q++;
          r = a + abs(q*b);
          cout << q << " " << r << endl;
      }
    }
    else if(a > 0)
    {
      r = abs(a) % abs(b);
      a = a - r;
      q = a / b;
      cout << q << " " << r << endl;
    }
  }

  return 0;
}
