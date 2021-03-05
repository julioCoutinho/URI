#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x;
  string msg;

  cin >> n;

  while(n-->0)
  {
    cin >> msg >> x;
    if(msg == "Thor")
      cout << "Y" << endl;
    else
      cout << "N" << endl;

  }
  return 0;
}
