#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x,velo;

  while(cin >> n)
  {
    velo = 0;
    while(n-->0)
    {
      cin >> x;
      if((x < 10) && (velo == 0) )
        velo = 1;
      else if((x>=10) && (x < 20) && (velo < 2))
        velo = 2;
      else if(x >= 20)
        velo = 3;
    }
    cout << velo << endl;;
  }


  return 0;
}
