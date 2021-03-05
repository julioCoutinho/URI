#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x,i;
  bool primo;
  cin >> n;

  while(n-->0)
  {
    cin >> x;
    i = 2;primo = true;
    while(i <= (x/2))
    {
      if(x % i == 0)
      {
        primo = false;
        break;
      }
      i++;
    }
    if(primo)
      cout << x << " eh primo" << endl;
    else
      cout << x << " nao eh primo" << endl;
  }


  return 0;
}
